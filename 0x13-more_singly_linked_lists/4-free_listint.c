#include "lists.h"
#include <stdlib.h>

/**
* free_listint - frees a listint
* @head: to be freed
*/

void free_listint(listint_t *head)
{
listint_t *temp;

while (!head)
{
temp = head;
head = head->next;
free(temp);
}
}
