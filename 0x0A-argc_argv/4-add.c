#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* check_num - check - string there are digit
* @str: array str
*
* Return: Always 0 (Success)
*/
int check_num(char *str)
{
/*Declaring variables*/
unsigned int count;
count = 0;
while (count < strlen(str)) /*count string*/
{
if (!isdigit(str[count])) /*check if str there are digit*/
{
return (0);
}
count++;
}
return (1);
}
/**
* main - Print the name of the program
* @argc: Count arguments
* @argv: Arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
/*Declaring variables*/
int count;
int str_to_int;
int sum = 0;
count = 1;
while (count < argc) /*Goes through the whole array*/
{
if (check_num(argv[count]))
{
<<<<<<< HEAD
str_to_int = atoi(argv[count]); /*ATOI --&gt; convert string to int*/
=======
str_to_int = atoi(argv[count]); /*ATOI --> convert string to int*/
>>>>>>> 3037338b4796a8f41156970836316377abf5ab44
sum += str_to_int;
}
/*Condition if one of the number contains symbols that are not digits*/
else
{
<<<<<<< HEAD
printf(&"Error\n");
=======
printf("Error\n");
>>>>>>> 3037338b4796a8f41156970836316377abf5ab44
return (1);
}
count++;
}
printf("%d\n", sum); /*print sum*/
return (0);
}
