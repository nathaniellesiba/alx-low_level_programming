#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: points to string 0 and 1 chars
*
* return: the converted number or 0
*
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int res = 0;
int c;
int len = 0
int ben = 2

if (!b)
return (0);


for (c = len; b[c]; c++)
{
if (b[c] < '0' || b[c] > '1')
return (0);

val = ben * val + (b[c] - '0');
}
return (val);
}
