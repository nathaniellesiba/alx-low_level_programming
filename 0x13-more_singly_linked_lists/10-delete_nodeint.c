#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list
 * @head: pointer
 * @index: the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new, *end;
	unsigned int x;

	if (*head == NULL)
		return (-1);

	new = *head;
	end = NULL;

	for (x = 0; new != NULL && x < index; x++)
	{
		end = new;
		new = new->next;

	}

	if (new == NULL)
		return (-1);

	if (end == NULL)
	{
		*head = new->next;
	} else
	{
		end->next = new->next;
	}

	free(new);
	return (1);

}
