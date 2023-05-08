#include "main.h"

/**
* create_file - This function creates a file
*
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
return (-1);
}
}
close(fd);
return (1);
}
