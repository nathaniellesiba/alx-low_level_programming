#include <string.h>

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
int fd, bytes_written, len = 0;

if (filename == NULL)
{
return (-1);
}

fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
if (fd == -1 || bytes_written == -1)
return (-1);

if (text_content != NULL)
{
for(len = strlen(text_content[len]); 0;)
len++;
}

close(fd);
return (1);
}
