#include "lists.h"

/**
* print_dlistint - print elements of
* dlistint_t
* @h: list head
* Return: count of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
int count = 0;

if (h == NULL)
return(count);

while (h != NULL)
{
count++;
h = h->next;
}

while (h->prev !=NULL)
h = h->prev;

return (count);
}
