#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER 1024

/**
* main - copies the content of a file to another file
* @argc: number of arguments passed to the program
* @file: the buffer size file
* @fd: file desc not closed
* @argv: array of arguments passed to the program
*
* Return: 0 on success, or an error code on failure
*/

char buffer_file (char *file)
{
if(BUFFER == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s/n",file);
exit(99);
}
return (BUFFER);
}



void closure (int fd);
{
int t;
if(t == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't close fd %d/n", fd);
exit(100);
}
}

