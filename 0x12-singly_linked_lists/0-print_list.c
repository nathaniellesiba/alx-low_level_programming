#include <stddef.h>
#include "main.h"

/**
 * print_list - printing all elements
 * @h: points to the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h);
size_t count = 0
while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");

else
printf("%s\n", h->str);

count++;

}
return (count);
}