#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: points to string 0 and 1 chars
* @binary_to_uint: this is a binary
* return: the converted number or 0
*
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int val = 0;
int c;


if (!b)
return (0);


for (c = 0; b[c]; c++)
{
if (b[c] < '0' || b[c] > '1')
return (0);

val = 2 * val + (b[c] - '0');
}
return (val);
}
