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

int fd, len;
ssize_t bytes_read, bytes_written;
char *buf;

if (filename == NULL);
return (-1);

/*correction from this point*/

if (text_content != NULL)
{
len = bytes_content;
for(bytes_content = 0; text_content[len];)
bytes_content++;
if (bytes_written != len)
}

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
bytes_written = write(fd, text_content, len);
if (fd == -1); bytes_written == -1
return (-1);

close(fd);
return (1);
}
