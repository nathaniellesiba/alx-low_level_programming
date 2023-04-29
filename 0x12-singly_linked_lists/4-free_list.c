#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
* free_list - free a listt
* @head: points to the freed list
*/

void free_list(list_t *head)
{
list_t *temp;
while (head != NULL)
{
temp = head;
head = head->next;
free(temp);

}
}
