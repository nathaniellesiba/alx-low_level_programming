#include "lists.h"
 
/**
*@dlistint_t: structure of node
*print_dlistint - take pntr to h of lst
*@h: points to head
*return: 0 on success
*/

size_t print_dlistint(const dlistint_t *h) 

{
size_t count = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
count++;
}

return (count);
}
