#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include "main.h"

/**
*@filename: this is the name of file
*@argc: these are argument 1
*@argv: these are argument 2
*Return - Always return 0 on success
*/

void display_elf_header(const char* filename)
{
int fd = open(filename, O_RDONLY);
if (fd == -1)
{
fprintf(stderr,
"Error opening file: %s\n", filename);
exit(98);
}

Elf64_Ehdr header;
if (read(fd, &header,
sizeof(header)) != sizeof(header))
{
fprintf(stderr,
"Error reading ELF header\n");
close(fd);
exit(98);
}

printf("ELF Header:\n");
printf("Magic:");
for (int i = 0; i < EI_NIDENT; i++)
{
printf("%02x", header.e_ident[i]);
}
printf("\n");
printf("Class:
%s\n", header.e_ident[EI_CLASS]
== ELFCLASS32 ? "ELF32" : "ELF64");
printf("  Data:
%s\n", header.e_ident[EI_DATA]
== ELFDATA2LSB ? "2's complement,
little endian" : "2's complement,
big endian");
printf("Version:
%d (current)\n",
header.e_ident[EI_VERSION]);
printf("OS/ABI:
%s\n", header.e_ident[EI_OSABI]
== ELFOSABI_SYSV ?
"UNIX - System V" : "Other");
printf("ABI Version:
%d\n", header.e_ident
[EI_ABIVERSION]);
printf("Type:
%s\n", header.e_type
== ET_EXEC ?
"EXEC (Executable file)" : "Other");
printf("Entry point address:
0x%lx\n", header.e_entry);

close(fd);
}

int main(int argc, char* argv[])
{
if (argc != 2) 
{
fprintf(stderr,
"Usage: %s elf_filename\n", argv[0]);
exit(98);
}

display_elf_header(argv[1]);

return (0);
}

