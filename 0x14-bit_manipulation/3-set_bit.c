#include "main.h"

/**
* set_bit - set the value of bit to 1
* @n: pointer to the number to modify
* @index: index of the bit to set
*
* Return: 1 if worked, or -1 on error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

*n |= (1 << index);

return (1);
}
