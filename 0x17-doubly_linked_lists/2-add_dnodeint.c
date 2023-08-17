#include "lists.h"

/**
* add_dnodeint - adds a new node at the beginning
* of a dlistint_t list
*
* @head: head of the list
* @n: value of the element
* Return: the address of the new element
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));
dlistint_t *h = *head;

if (new == NULL)
return (NULL);

new->n = n;
new->prev = NULL;

if (h != NULL)
{
while (h->prev != NULL)
h = h->prev;
}

new->next = h;

if (h != NULL)
h->prev = new;

*head = new;

return (new);
}
