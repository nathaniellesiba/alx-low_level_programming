#include "main.h"

/**
* check - Checks if a file is an ELF file
* @elf_pointer: Array pointer to ELF magic numbers
*
* Description: check - exit 98
* Return: 0 on success.
*/

<<<<<<< HEAD

void check(unsigned char *elf_pointer)
{
int i;
for (i = 0; i < 4; i++)
=======
void display_elf_header(const char *filename)
{
int fd = open(filename, O_RDONLY);
char elc, eld, eiv, eio, abv;
elc = header.e_ident[EI_CLASS];
eld = header.e_ident[EI_DATA];
eiv = header.e_ident[EI_VERSION];
eio = header.e_ident[EI_OSABI];
abv = header.e_ident[EI_ABIVERSION];
if (fd == -1)
>>>>>>> 99291976b3ec99d48305a138a7a93b1cde9c93f9
{
if (elf_pointer[i] != 127 &&
elf_pointer[i] != 'E' &&
elf_pointer[i] != 'L' &&
elf_pointer[i] != 'F')
{
fprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}
}
}


void magic(unsigned char *elf_pointer)
{
<<<<<<< HEAD
int i;
printf("Magic: ");
for (i = 0; i < EI_NIDENT; i++)
{
printf("%02x", elf_pointer[i]);
if (i == EI_NIDENT - 1)
printf("\n");
else
printf(" ");
}
=======

printf("%02x", header.e_ident[i]);
}
printf("\n");
printf("Class:
%s\n", elc
== ELFCLASS32 ? "ELF32" : "ELF64");
printf("  Data:
%s\n", eld
== ELFDATA2LSB ? "2's complement,
little endian" : "2's complement,
big endian");
printf("Version:
%d (current)\n",
eiv);
printf("OS/ABI:
%s\n", eio
== ELFOSABI_SYSV ?
"UNIX - System V" : "Other");
printf("ABI Version:
%d\n", abv);
printf("Type:
%s\n", header.e_type
== ET_EXEC ?
"EXEC (Executable file)" : "Other");
printf("Entry point address:
0x%lx\n", header.e_entry);

close(fd);
}

int main(int argc, char *argv[])
{
if (argc != 2)
{
fprintf(stderr,
"Usage: %s elf_filename\n", argv[0]);
exit(98);
>>>>>>> 99291976b3ec99d48305a138a7a93b1cde9c93f9
}
