#include <stdio.h>
#include "main.h"
<<<<<<< HEAD

/**
* _atoi - converts a string to an integer
* @s: string to be converted
*
* Return: the int converted from the string
*/
int _atoi(char *s)
{
=======
		
/**
* _atoi - converts a string to an integer
* @s: string to be converted		
*
* Return: the int converted from the string		
*/
int _atoi(char *s)
{		
>>>>>>> 3037338b4796a8f41156970836316377abf5ab44
int i, d, n, len, f, digit;
i = 0;
d = 0;
n = 0;
len = 0;
f = 0;
digit = 0;
<<<<<<< HEAD
while (s[len] !='\0')
=======
while (s[len] != '\0')
>>>>>>> 3037338b4796a8f41156970836316377abf5ab44
len++;
while (i < len && f == 0)
{
if (s[i] == '-')
++d;
<<<<<<< HEAD
if (s[i] > = '0' && s[i] <= '9')
=======
if (s[i] >= '0' && s[i] <= '9')
>>>>>>> 3037338b4796a8f41156970836316377abf5ab44
{
digit = s[i] - '0';
if (d % 2)
digit = -digit;
n = n * 10 + digit;
f = 1;
<<<<<<< HEAD
if (s[i + 1] <'0' || s[i + 1] >'9')
=======
if (s[i + 1] < '0' || s[i + 1] > '9')
>>>>>>> 3037338b4796a8f41156970836316377abf5ab44
break;
f = 0;
}
i++;
}
if (f == 0)
return (0);
<<<<<<< HEAD
return (n);
}
/**
* main - multiplies two numbers
* @argc: number of arguments
* @argv: array of arguments
*
* Return: 0 (Success), 1 (Error)
*/
int main(int argc, char *argv[])
{
int result, num1, num2;
if (argc &lt; 3 || argc &gt; 3)
{
printf("Error\n");
return (1);
=======
return (n);		
}		
/**
* main - multiplies two numbers
* @argc: number of arguments
* @argv: array of arguments		
*
* Return: 0 (Success), 1 (Error)		
*/
int main(int argc, char *argv[])		
{
int result, num1, num2;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);		
>>>>>>> 3037338b4796a8f41156970836316377abf5ab44
}
num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);
result = num1 * num2;
printf("%d\n", result);
<<<<<<< HEAD
return (0);
=======
return (0);		
>>>>>>> 3037338b4796a8f41156970836316377abf5ab44
}
