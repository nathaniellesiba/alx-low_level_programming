#include "lists.h"
#include <stdlib.h>

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: points to the first element
* @idx: index of the list where the new node should be added
* @n: value
* Return: address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp;
unsigned int j;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

temp = *head;
for (j = 0; j < idx - 1; j++)
{
if (temp == NULL)
return (NULL);
temp = temp->next;
}

new_node->next = temp->next;
temp->next = new_node;

return (new_node);
}
