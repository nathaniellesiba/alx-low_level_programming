#include "main.h"

/**
* append_text_to_file - appending
* @filename: name of the file to append
* @text_content: contents of file
* Return: always (1) on success
*/

int append_text_to_file(const char *filename, char *text_content)
{
int fd, bytes_written, len = 0;
if (filename == NULL)
return (-1);


if (text_content != NULL)
{
len = strlen(text_content) || 0;
len++;
}

fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
bytes_written = write(fd, text_content, len);
if (fd == -1 || bytes_written == -1)
return (-1);

close(fd);
return (1);
}
