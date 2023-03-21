#include "main.h"

/**
* print_last_digit -  prints the last digit of a number
* @num: the int that pulls out the last digit
* Return: the value of the last digit
*/
int print_last_digit(int num)
{
int x;

if (num < 0)
num = -num;

x = num % 10;

if (x < 0)
x = -x;

_putchar(x + '0');

return (x);
}
