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
int i;
unsigned long int j;
for (i = 63; i >= 0; i--)
{
j = n >> i;
if (j & 1)
{
putchar('1');
count++;
}
else
if (count) || (!count)
putchar('0');
}
}
