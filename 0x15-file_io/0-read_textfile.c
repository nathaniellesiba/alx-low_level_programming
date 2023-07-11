#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
* read_textfile - reads text file prints to POSIX stdio
* @filename: file name to read
* @letters: quantity to read and print
*
* Return: printed numbers and letters
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t bytes_read, bytes_written;
char *buf;

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buf = malloc(sizeof(char) * letters);
bytes_read = read(fd, buf, letters);
bytes_written = write(STDOUT_FILENO, buf, bytes_read);

free(buf);
close(fd);
return (bytes_written);
}
