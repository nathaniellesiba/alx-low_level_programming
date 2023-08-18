#include "lists.h"

/**
* delete_dnodeint_at_index - deletes
* the node at index of a dlistint_t
* linked list
* @head: pointer to the header
* @index: node that should be deleted.
* Index starts at 0
* Return: 1 on success or -1 on failure
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index) 
{

if (*head == NULL) 
{
return (-1);
}

dlistint_t *current = *head;

if (index == 0)
{
*head = current->next;
if (*head != NULL)
{
(*head)->prev = NULL;
}
free(current);
return (1);
}

for (unsigned int i = 0; current != NULL && i < index - 1; i++)
{
current = current->next;
}
if (current == NULL || current->next == NULL)
{
return (-1);
}
dlistint_t *next = current->next->next;
free(current->next);
current->next = next;

if (current->next != NULL)
{
current->next->prev = current;
}
return (1);
}
