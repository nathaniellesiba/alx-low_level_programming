#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include "main.h"


/**
* main - copies the content of a file
* to another file
* @argc: number of arguments passed
* to the program
* @argv: array of arguments passed
* to the program
* @message: displaying error
*
* Return: 0 on success, or
* an error code on failure
*/

void display_error(const char* message)
{
fprintf(stderr, "Error: %s\n", message);
exit(98);
}

int main(int argc, char* argv[])
{
if (argc != 2)
{
display_error("Invalid number of
arguments. Usage: elf_header
elf_filename");
}

int fd = open(argv[1], O_RDONLY);
if (fd == -1) {
display_error("Failed to open the
ELF file");
}

Elf64_Ehdr header;
if (read(fd, &header, sizeof(header))
!= sizeof(header))
{
display_error
("Failed to read the ELF header");
}

if (header.e_ident[EI_MAG0]
!= ELFMAG0 || header.e_ident[EI_MAG1]
!= ELFMAG1 ||
header.e_ident[EI_MAG2]
!= ELFMAG2 || header.e_ident[EI_MAG3]
!= ELFMAG3)
{
display_error("Not an ELF file");
}

printf("Magic: %02x %02x %02x %02x\n",
header.e_ident[EI_MAG0],
header.e_ident[EI_MAG1],
header.e_ident[EI_MAG2],
header.e_ident[EI_MAG3]);
printf("Class: %d\n",
header.e_ident[EI_CLASS]);
printf("Data: %d\n",
header.e_ident[EI_DATA]);
printf("Version: %d\n",
header.e_ident[EI_VERSION]);
printf("OS/ABI: %d\n",
header.e_ident[EI_OSABI]);
printf("ABI Version: %d\n",
header.e_ident[EI_ABIVERSION]);
printf("Type: %d\n",
header.e_type);
printf("Entry point address: 0x%lx\n",
header.e_entry);

close(fd);
return (0);
}
