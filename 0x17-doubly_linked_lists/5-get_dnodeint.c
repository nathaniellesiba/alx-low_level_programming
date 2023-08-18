#include "lists.h"

/**
* get_dnodeint_at_index - returns nth
* node of doubly linkd list.
* @head: Pointer to the head of list.
* @index: Index of the node to retrieve
*
* Return: nth node or NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head;
unsigned int count = 0;

while (current != NULL)
{
if (count == index)
return (current);
count++;
current = current->next;
}
return (NULL);
}
