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
unsigned int base = 1;
int len = 0;

if (!b)
return (0);

while (b[len])
len++;

for (int i = len - 1; i >= 0; i--)
{
if (b[i] != '0' && b[i] != '1')
return (0);

if (b[i] == '1')
res += base;

base *= 2;
}

return (res);
}
