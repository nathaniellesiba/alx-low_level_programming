#include "main.h"

/**
* Description - set value of bit to 0
* @n: Pointer the number whose bit 
* is to be cleared
* @index: of the bit to be cleared
*
* Return: 1 if it worked or -1 on error
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= 
(sizeof(unsigned long int) * 8))
return (-1);
*n &= ~(1UL << index);
return (1);
}
