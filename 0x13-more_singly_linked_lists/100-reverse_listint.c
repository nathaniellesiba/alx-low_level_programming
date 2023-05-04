#include "lists.h"

/**
 * reverse_listint - reverses a listint_t
 * @head: pointer to the element
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *lst = *head, *next;
	listint_t *prev = NULL;

	while (lst != NULL)
	{
		next = lst->next;
		lst->next = prev;
		prev = lst;
		lst = next;
	}

	*head = prev;
	return (*head);
}
