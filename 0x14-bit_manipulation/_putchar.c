#include "main.h"
#include <unistd.h>

/**
* _putchar - display and write char
* description: character to stdout
* @c: printed char
* Return: always 1 on success
*/

int _putchar(char c)
{
return(write(1, &c),1);
}
