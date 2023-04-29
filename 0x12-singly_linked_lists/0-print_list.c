#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - printing all elements
 * @h: lists elements to be printed
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
if (h->str != NULL)
printf("[0] (nil)\n");
else
printf("%s\n", h->str);
count++;
h = h->next;
}
return (count);
}
