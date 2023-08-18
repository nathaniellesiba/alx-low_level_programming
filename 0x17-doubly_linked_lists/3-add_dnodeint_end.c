i#include "lists.h"

/**
* add_dnodeint_end - adds new node
* at the end of a dlistint_t list
* @head: pointr head
* @n: value of the element
* Return: the address of the new element
*/


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node,
	temp;

dlistint_t *new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
new_node->prev = NULL;
*head = new_node;
return (new_node);
}

while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new_node;
new_node->prev = temp;
}

return (new_node);
}
