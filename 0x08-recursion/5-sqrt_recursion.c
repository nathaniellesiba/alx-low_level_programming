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
return (calculate_sqrt(n, 0, n));
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
if (start <= end)
{
int mid = (start + end) / 2;
int mid_sq = mid * mid;

if (mid_sq == n)
{
return (mid);
}
else if (mid_sq < n)
{
return (calculate_sqrt(n, mid + 1, end));
}
else
{
return (calculate_sqrt(n, start, mid - 1));
}
}
else
{
return (-1);
}
}

