#include "list.h"

/**
*  generateKey - take usernm as paramtr
* @username: user credentials
* main - description
* @argc: arguments count
* @argv: argument vector
* return: 0 on success
*/

void generateKey(char* username)
{
int keyLength = strlen(username);
char* key = (char*)malloc(keyLength + 1);

for (int i = 0; i < keyLength; i++)
{
key[i] = username[i] ^ 0x55;
}

key[keyLength] = '\0';

printf("Valid key for %s: %s\n", username, key);

free(key);
}

int main(int argc, char* argv[])
{
if (argc != 2)
{
printf("Usage: %s username\n", argv[0]);
return (1);
}

generateKey(argv[1]);

return (0);
}
