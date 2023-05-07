#include "main.h"
#include <stdio.h>

/**
 * print_binary - function printing binary
 *
 * @n: integer
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
_putchar('1');
count++;
}
else
if (count)
_putchar('0');
}
if (!count)
_putchar('0')
}
