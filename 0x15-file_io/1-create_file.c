#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
* create_file - This function creates a file
* with the given filename and writes the given text content to it.
* If the file already exists
* it will not change the permissions and will truncate the file.
* If the filename or text_content is NULL, it will return -1.
* The created file will have permissions rw-------.
* @text_content: content
* Parameters:
* filename (const char*): The name of the file to create
* text_content (char*): The text content to write to the file
*
* Returns: on success and failure
* int: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
if (filename == NULL)
{
return (-1);
}
int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
{
return (-1);
}
if (text_content != NULL)
{
int len = strlen(text_content);
int bytes_written = write(fd, text_content, len);
if (bytes_written != len)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
