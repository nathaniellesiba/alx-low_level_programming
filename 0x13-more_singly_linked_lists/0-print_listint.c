#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
* main - check code
* @h: printing elements
* struct listint_s - singly linked list
* @n: integer
* @next: points to the next node
*
* Return: count of nodes
* Description: singly linked list node structure
*
*/

size_t print_listint(const listint_t *h);
{
size_t count = 0;

while (h)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
