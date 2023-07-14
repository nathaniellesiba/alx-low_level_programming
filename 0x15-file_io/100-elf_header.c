#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

#define ERROR_MSG "Error: Unable to read ELF file.\n"

/*
*@header: this is the header
*@argv: argument array
*@argc: argument numbers
* main - Displays the information contained in the
* ELF header at the start of an ELF file.
* print_elf_header - display header
* Return: 0 on success.
*
* Description: If the file is not an ELF File or
* the function fails - exit code 98.
*/

void print_elf_header(Elf64_Ehdr *header)
{
printf("Magic: ");
for (int i = 0; i < EI_NIDENT; i++)
{
printf("%02x ", header->e_ident[i]);
}
printf("\n");

printf("Class: ");
switch (header->e_ident[EI_CLASS])
{
case ELFCLASSNONE: printf("None\n"); break;
case ELFCLASS32: printf("ELF32\n"); break;
case ELFCLASS64: printf("ELF64\n"); break;
default: printf("<unknown>\n"); break;
}

printf("Data: ");
switch (header->e_ident[EI_DATA])
{
case ELFDATANONE: printf("None\n"); break;
case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
default: printf("<unknown>\n"); break;
}

printf("Version: %d\n", header->e_ident[EI_VERSION]);

printf("OS/ABI: ");
switch (header->e_ident[EI_OSABI])
{
case ELFOSABI_SYSV: printf("UNIX System V ABI\n"); break;
case ELFOSABI_HPUX: printf("HP-UX ABI\n"); break;
case ELFOSABI_NETBSD: printf("NetBSD ABI\n"); break;
case ELFOSABI_LINUX: printf("Linux ABI\n"); break;
case ELFOSABI_SOLARIS: printf("Solaris ABI\n"); break;
case ELFOSABI_AIX: printf("AIX ABI\n"); break;
case ELFOSABI_IRIX: printf("IRIX ABI\n"); break;
case ELFOSABI_FREEBSD: printf("FreeBSD ABI\n"); break;
case ELFOSABI_TRU64: printf("TRU64 UNIX ABI\n"); break;
case ELFOSABI_MODESTO: printf("Novell Modesto ABI\n"); break;
case ELFOSABI_OPENBSD: printf("OpenBSD ABI\n"); break;
default: printf("<unknown>\n"); break;
}

printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);

printf("Type: ");
switch (header->e_type)
{
case ET_NONE: printf("NONE (No file type)\n"); break;
case ET_REL: printf("REL (Relocatable file)\n"); break;
case ET_EXEC: printf("EXEC (Executable file)\n"); break;
case ET_DYN: printf("DYN (Shared object file)\n"); break;
case ET_CORE: printf("CORE (Core file)\n"); break;
default: printf("<unknown>\n"); break;
}

printf("Entry point address: 0x%lx\n", header->e_entry);

printf("Start of program headers: %lu (bytes into file)\n", header->e_phoff);
printf("Start of section headers:  %lu (bytes into file)\n", header->e_shoff);

printf("Flags:  0x%x\n", header->e_flags);

printf("Size of this header: %d (bytes)\n", header->e_ehsize);
printf("Size of program headers: %d (bytes)\n", header->e_phentsize);
printf("Number of program headers: %d\n", header->e_phnum);
printf("Size of section headers: %d (bytes)\n", header->e_shentsize);
printf("Number of section headers: %d\n", header->e_shnum);
printf("Section header string table index: %d\n", header->e_shstrndx);
}


int main(int argc, char **argv)
{
if (argc != 2)
{
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
return (98);
}

int fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
fprintf(stderr, ERROR_MSG);
return (98);
}

Elf64_Ehdr header;
if (read(fd, &header, sizeof(header)) != sizeof(header))
{
fprintf(stderr, ERROR_MSG);
close(fd);
return (98);
}

if (header.e_ident[EI_MAG0] != ELFMAG0 ||
header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 ||
header.e_ident[EI_MAG3] != ELFMAG3)
{
fprintf(stderr, ERROR_MSG);
close(fd);
return (98);
}

print_elf_header(&header);

close(fd);
return (0);
}
