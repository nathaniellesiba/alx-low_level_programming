#include "main.h"

/**
* main - the main file
* Return: always 0
*/

int main(void)
{
DIR *dir;
struct dirent *entry;
char *1-create_dynamic_lib;
void *handle;


dir = opendir(".");
if (dir == NULL)
{
perror("Unable to open directory");
exit(EXIT_FAILURE);
}


while ((entry = readdir(dir)) != NULL)
{
1-create_dynamic_lib = entry->d_name;


if (strstr(1-create_dynamic_lib, ".c") != NULL)
{

handle = dlopen(1-create_dynamic_lib, RTLD_LAZY);
if (handle == NULL) {
fprintf(stderr, "Unable to load library: %s\n", dlerror());
exit(EXIT_FAILURE);
}
}
}


closedir(dir);


fprintf("Dynamic library 'liball.so' created successfully!\n");

return (0);
}
