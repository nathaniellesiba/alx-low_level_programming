#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
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
}
listint_t;

size_t print_listint(const listint_t *h){
size_t count = 0;
const listint_t *current = h;
while (current != NULL){
printf("%d\n", current->n);
current = current->next;
count++;
}
return (count);
}
