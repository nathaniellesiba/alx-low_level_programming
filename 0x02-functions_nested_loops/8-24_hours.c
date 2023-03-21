#include "main.h"

/**
* jack_bauer - prints every minute of the day
* starting from 00:00 to 23:59
*/

void jack_bauer(void)
{
int a, x;

a = 0;

while (a < 24)
{
x = 0;
while (x < 60)
{
_putchar((a / 10) + '0');
_putchar((a % 10) + '0');
_putchar(':');
_putchar((x / 10) + '0');
_putchar((x % 10) + '0');
_putchar('\n');
x++;
}
a++;
}
}
