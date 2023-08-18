#include "lists.h"
#include <stddef.h>

/**
* print_dlistint - print elements of
* dlistint_t
* @h: list head
* Return: count of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
