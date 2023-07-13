#include "main.h"

/**
* check - Checks if a file is an ELF file
* @elf_pointer: Array pointer to ELF magic numbers
*
* Description: check - exit 98
* Return: 0 on success.
*/


void check(unsigned char *elf_pointer)
{
int i;
for (i = 0; i < 4; i++)
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
}
