#include "main.h"
#include <stdio.h>

/**
*Description: checks endianness of syst
*
*Returns: 0 if big endian, 1 if little
*/

int get_endianness(void)
{
union
{
int i;
char c;
}
u;
u.i = 1;
if (u.c == 1)
{
return (1);
}
else
{
return (0);
}
}
