#include "main.h"
/**
 * flip_bits - Description: returning number of bits
 *
 * @n: unassigned long integer
 * @m: unassigned long integer
 *
 * return: flipped changed numbers
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x = n ^ m;
unsigned int count = 0;
while (x != 0)
{
count++;
x &= (x - 1);
}
return (count);
}
