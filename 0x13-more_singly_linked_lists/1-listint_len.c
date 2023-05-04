#include "lists.h"
#include <stddef.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer
 * Return: number of elements
 *
*/
size_t listint_len(const listint_t *h)
{
size_t num_el = 0;

while (h != NULL)
{
num_el++;
h = h->next;
}
return (num_el);
}
