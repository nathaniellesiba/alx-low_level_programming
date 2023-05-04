#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_listint_safe - prints a listint_t linked list
* @head: Pointer to the head
* Return: The number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
const listint_t *s = head;
const listint_t *f = head;
size_t num_nodes = 0;

while (s && f && f->next)
{
printf("[%p] %d\n", (void *)s, s->n);
num_nodes++;
s = s->next;
f = f->next->next;

if (s == f)
{
printf("-> [%p] %d\n", (void *)s, s->n);
exit(98);
}
}

while (s)
{
printf("[%p] %d\n", (void *)s, s->n);
num_nodes++;
s = s->next;
}

return (num_nodes);
}
