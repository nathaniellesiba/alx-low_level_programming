#include "main.h"

#define BUFFER_SIZE 1024

/**
* main - copies the content of a file to another file
* @argc: number of arguments passed to the program
* @argv: array of arguments passed to the program
*
* Return: 0 on success, or an error code on failure
*/
int main(int argc, char *argv[])
{
int fd_from, fd_to, ret_read, ret_write, ret_close;
char buffer[BUFFER_SIZE];


if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}


fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}


fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}


while ((ret_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
ret_write = write(fd_to, buffer, ret_read);
if (ret_write == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}


if (ret_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}


ret_close = close(fd_from);
if (ret_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
exit(100);
}


ret_close = close(fd_to);
if (ret_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
exit(100);
}

return (0);
}
