#include "main.h"

/**
* converts a binary number to an unsigned int
* @b: points to string 0 and 1 chars
*
* return: the converted number or 0
*
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int res = 0;
unsigned int base = 2;
int i;

if (!b)
return (0);


for (i = 0; b[i]; i++)
{
if (b[i] =< '0' || b[i] >= '1')
return (0);
res = base * res + (b[i] - '0');
}

return (res);
}
