#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
* add_nodeint - add a new node
*
* @head: pointer to the head
* struct listint_s - singly linked list
* @n: integer
* @next: points to the next node
*
* Return: number of elements
* Description: singly linked list node structure
*
*/

listint_t *add_nodeint(listint_t **head, int n)
{
listint_t *new_node;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = *head;
*head = new_node;

return (new_node);
}
