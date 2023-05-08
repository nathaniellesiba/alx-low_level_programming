#include <stdio.h>
#include "main.h"

/**
*This function appends text at the end of a file.
*
*Parameters:
*filename (const char*): The name of the file to append to
*text_content (char*): The NULL terminated string to add at the end of the file
*
*Returns:
*int: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
if (filename == NULL)
{
return (-1);
}
if (text_content == NULL)
{
return (1);
}
FILE *fp = fopen(filename, "a");
if (fp == NULL)
{
return (-1);
}

int result = fputs(text_content, fp);
fclose(fp);
if (result == EOF)
{
return (-1);
}
else
{
return (1);
}
}

