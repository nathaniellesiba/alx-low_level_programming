#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: prints linked lists
 * Return: number of nodes
 */

<<<<<<< HEAD
size_t print_listint(const listint_t *h)
=======
typedef struct listint_s
{
int n;
struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
>>>>>>> 229b2951daa91a6a7f34cd042d3d1329386e6806
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
