#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
unsigned int num = 0;
int len, i;

if (b == NULL)
return (0);

len = strlen(b);

for (i = 0; i < len; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);

if (b[i] == '1')
num += pow(2, len - i - 1);
}

return (num);
}
