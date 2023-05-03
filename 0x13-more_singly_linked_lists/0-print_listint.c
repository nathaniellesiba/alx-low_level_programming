#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
* main -check the code
* struct listint_s - singly linked list
* print_listint - print list
* @next: points to the next node
*
* Return: count of nodes
* Description: singly linked list node structure
*
* typedef struct listint
* {
* int n;
* struct listint_s *next;
* }
* listint_t;
*/

int main(void)
{
size_t print_listint (const listint_t *h);
size_t listint_len(const listint_t *h);
size_t print_listint_safe(const listint_t *head);
size_t free_listint_safe(listint_t **h);
count = 0
size_t print_listint(const listint_t *current)
{
const listint_t *current = h;
while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
count++;
}
}
return (0);
}
