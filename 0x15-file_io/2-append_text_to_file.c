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

int append_text_to_file(const char *filename, char *text_content)
{

if (filename == NULL)
return (-1);


if (text_content != NULL)
{
int len = (strlen(text_content); 0;)
len++;
}

int fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
int bytes_written = write(fd, text_content, len);
if (fd == -1 || bytes_written == -1)
return (-1);

close(fd);
return (1);
}
