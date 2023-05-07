#include "main.h"

/**
 * value of a bit at a given index
 * @index: starts from 0 of bit
 *
 * @n: integer
 * return: value of bit at index
 *
 */

int get_bit(unsigned long int n, unsigned int index);
{
int index_bit;
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
index_bit = (n >> index) & 1;
return(index_bit);
}
