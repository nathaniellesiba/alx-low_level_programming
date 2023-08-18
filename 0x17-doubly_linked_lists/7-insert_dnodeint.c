#include "lists.h"

/**
* insert_dnodeint_at_index - inserts
* a new node at a given position
* @h: pointer to the header
* @idx: the new node should be added
* Index starts at 0
* @n: value of the new node
* Return: address of new node or NULL
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *temp;
unsigned int i;

if (h == NULL)
return (NULL);

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->prev = NULL;
new_node->next = NULL;

if (idx == 0)
{
new_node->next = *h;
if (*h != NULL)
(*h)->prev = new_node;
*h = new_node;
return (new_node);
}

temp = *h;
for (i = 0; i < idx - 1 && temp != NULL; i++)
temp = temp->next;

if (temp == NULL)
return (NULL);

new_node->next = temp->next;
new_node->prev = temp;
if (temp->next != NULL)
temp->next->prev = new_node;
temp->next = new_node;

return (new_node);
}
