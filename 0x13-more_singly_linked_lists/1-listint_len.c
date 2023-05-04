#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
* main -check code
*
* @h: pointer to the head
* struct listint_s - singly linked list
* @n: integer
* @next: points to the next node
*
* Return: number of elements
* Description: singly linked list node structure
*
*/

typedef struct listint_s
{
int n;
struct listint_s *next;
} listint_t;

size_t listint_len(const listint_t *h)
{
size_t count = 0;

while (h)
{
count++;
h = h->next;
}
return (count);
}
