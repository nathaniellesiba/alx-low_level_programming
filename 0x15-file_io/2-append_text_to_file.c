#include "main.h"

/**
* This function appends text at the end of a file.
*
* Parameters:
* filename (const char*): The name of the file to append to
* text_content (char*): The NULL terminated string to add at the end of the file
*
* Returns:
* int: 1 on success and -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
int fd, bytes_written = 0;

if (filename == NULL)
{
return (-1);
}

fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
if (fd == -1)
{
return (-1);
}

if (text_content != NULL)
{
size_t len = strlen(text_content);
bytes_written = write(fd, text_content, len);
if (bytes_written == -1 || (size_t)bytes_written != len)
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}
