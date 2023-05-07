#include "main.h"
#include <stdio.h>

/**
 * function that prints the binary
 *
 * @n: integer
 * print - print binary
 *
 */

void print_binary(unsigned long int n);
{
int i, j;
for (i = sizeof(unsigned long int)*
8 - 1; i >= 0; i--)
{
j = n >> i;
if (j & 1)
putchar('1');
else
putchar('0');
}
}
