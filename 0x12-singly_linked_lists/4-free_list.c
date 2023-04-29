#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
*list_t - free a listt
*return: the freedom
*/

void free_list(list_t *head)
{
list_t *temp;
while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
return (0);
}
}
