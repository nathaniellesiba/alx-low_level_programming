#include "main.h"
#include <stdio.h>

/**
* print_binary - function printing binary
*
* @n: integer
*
*/

void print_binary(unsigned long int n)
{
int i, count = 0;
unsigned long int j;
for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
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
_putchar('0');
}
