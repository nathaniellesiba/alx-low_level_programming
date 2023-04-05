#include "main.h"

int calculate_sqrt(int n, int start, int end);

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number to calculate the square root of
*
* Return: the resulting square root
*/

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (calculate_sqrt(n, 1, n));
}

/**
* calculate_sqrt - calculate the square root
* @n: number to find the square root
* @start: the lower bound of the search range
* @end: the upper bound of the search range
* Return: output square root
*/

int calculate_sqrt(int n, int start, int end)
{
int mid;

if (start > end)
return (-1);

mid = (start + end) / 2;

if (mid *mid == n)
return (mid);
else if (mid *mid < n)
return (calculate_sqrt(n, mid + 1, end));
else
return (calculate_sqrt(n, start, mid - 1));
}
