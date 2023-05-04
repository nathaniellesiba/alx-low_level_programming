#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: prints linked lists
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t num_nodes = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
num_nodes++;
}
return (num_nodes);
}
