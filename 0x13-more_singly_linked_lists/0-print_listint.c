#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
* main - check code
* struct listint_s - singly linked list
* @n: integer
* @next: points to the next node
*
* Return: count of nodes
* Description: singly linked list node structure
*
*/

typedef struct listint_s
{
int n;
struct listint_s *next;

} listint_t;

int main(void)
{
size_t count = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return count;
}
