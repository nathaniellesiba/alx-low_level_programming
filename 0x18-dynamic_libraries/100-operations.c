#include "main.h"

/**
* add - adding ints
* multiply - multiplying nums
* greet - sending greetings
* @a: the first integer
* @b: the second integer
* @name: the person greeted
* Return: always 0
*/

int add(int a, int b)
{
return (a + b);
}


float multiply(float a, float b)
{
return a * b;
}


void greet(const char* name)
{
fprintf("Hello, %s!\n", name);
}
