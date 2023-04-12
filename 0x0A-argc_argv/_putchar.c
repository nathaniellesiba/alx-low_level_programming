<<<<<<< HEAD
#include <stdio.h>
=======
#include <stdio.h>		
>>>>>>> 3037338b4796a8f41156970836316377abf5ab44
#include "main.h"

/**
* _putchar - writes the character c to stdout
<<<<<<< HEAD
* @c:Ther character to print
*
* Return: On success 1.
* On error, -1 is returned and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &amp;c, 1));
=======
* @c:Ther character to print		
*
* Return: On success 1.
* On error, -1 is returned and errno is set appropriately.		
*/
int _putchar(char c)		
{
return (write(1, &c, 1));		
>>>>>>> 3037338b4796a8f41156970836316377abf5ab44
}
