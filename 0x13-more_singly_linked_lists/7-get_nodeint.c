#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of a listint_t linked list
* @head: points to element
* @index: is the index of the node, starting at 0
* Return: the nth node or NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int x = 0;
listint_t *curr = head;

while (curr != NULL)
{
if (x == index)
{
return (curr);
}
x++;
curr = curr->next;
}

return (NULL);
}
