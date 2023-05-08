#include <unistd.h>
#include <elf.h>
#include <string.h>
#include <errno.h>
#include "main.h"

/**
* elf_header - displays ELF header at start
* @filename: the name of the ELF file
*
* Return: 0 on success, 98 on failure
*/

#define BUF_SIZE 4096

int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr elf_header;
char buffer[BUF_SIZE];
ssize_t nread;

/*Check if filename is provided*/
if (argc != 2) {
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
exit(98);
}

/*Open the ELF file*/
fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
fprintf(stderr, "Error: cannot open file '%s': %s\n", argv[1], strerror(errno));
exit(98);
}

/*Read the ELF header*/
nread = read(fd, &elf_header, sizeof(Elf64_Ehdr));
if (nread != sizeof(Elf64_Ehdr))
{
fprintf(stderr, "Error: cannot read ELF header: %s\n", strerror(errno));
exit(98);
}

/*Check if the file is an ELF file*/
if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
{
fprintf(stderr, "Error: '%s' is not an ELF file\n", argv[1]);
exit(98);
}

/*Display the ELF header information*/
printf("Magic:");
for (int i = 0; i < EI_NIDENT; i++)
{
printf("%02x ", elf_header.e_ident[i]);
}
printf("\n");

printf("Class:");
switch (elf_header.e_ident[EI_CLASS])
{
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("Invalid class\n");
break;
}

printf("Data:");
switch (elf_header.e_ident[EI_DATA])
{
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("Invalid data encoding\n");
break;
}

printf("Version: %d\n", elf_header.e_ident[EI_VERSION]);

printf("OS/ABI:");
switch (elf_header.e_ident[EI_OSABI])
{
case ELFOSABI_SYSV:
printf("UNIX System V ABI\n");
break;
case ELFOSABI_HPUX:
printf("HP-UX ABI\n");
break;
case ELFOSABI_NETBSD:
printf("NetBSD ABI\n");
break;
case ELFOSABI_LINUX:
printf("Linux ABI\n");
break;
case ELFOSABI_SOLARIS:
printf("Solaris ABI\n");
break;
case ELFOSABI_FREEBSD:
printf("FreeBSD ABI\n");
break;
case ELFOSABI_TRU64:
printf("Compaq TRU64 UNIX ABI\n");
break;
case ELFOSABI_ARM:
printf("ARM architecture ABI\n");
break;
case ELFOSABI_STANDALONE:
printf("Standalone (embedded) ABI\n");
break;
default:
printf("Unknown ABI\n");
break;
}

printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);

printf("Type:");
switch (elf_header.e_type)
{
case ET_NONE:
printf("NONE (No file type)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("Unknown type\n");
break;
}

printf("Entry point address: 0x%lx\n", elf_header.e_entry);

/*Close the ELF file*/
if (close(fd) == -1)
{
fprintf(stderr, "Error: cannot close file '%s': %s\n", argv[1], strerror(errno));
exit(98);
}

return (0);
}
