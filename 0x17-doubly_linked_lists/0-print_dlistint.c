#include "lists.h"
#include <string.h>
#include <stdlib>
#include <stdio>

/**
* print_dlistint - print elements of
* dlistint_t
* @h: list head
* Return: count of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{

int count = 0;

while (h)
{
if(h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
count++;
h = h->next;
}
return (count);
}
