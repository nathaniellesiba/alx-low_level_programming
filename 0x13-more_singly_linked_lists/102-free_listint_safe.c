#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
* main -check code
* struct listint_s - singly linked list
* @n: integer
* @next: points to the next node
*
* Return: free a list
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
size_t size = 0;
listint_t *temp;

while (*h)
{
size++;
if ((*h)->next >= *h)
{
free(*h);
*h = NULL;
break;
}
temp = (*h)->next;
free(*h);
*h = temp;
}
return (size);
}
