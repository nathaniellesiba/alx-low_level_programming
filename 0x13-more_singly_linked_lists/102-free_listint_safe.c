#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_listint_safe - frees a listint_t list
* @h: pointer
* Return: size of the list that was free’d
*/

size_t free_listint_safe(listint_t **h)

{
size_t size = 0;
listint_t *tmp, *next;

if (h == NULL || *h == NULL)
return (0);

tmp = *h;
while (tmp != NULL)
{
size++;
next = tmp->next;
free(tmp);
if (next >= tmp)
break;
tmp = next;
}

*h = NULL;
return (size);
}
