#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
* add_nodeint_end - add new node at the end
*
* @head: pointer to the head
* struct listint_s - singly linked list
* @n: integer
* @next: points to the next node
*
* Return: address of elements
* Description: singly linked list node structure
*
*/

typedef struct listint_s
{
int n;
struct listint_s *next;
} listint_t;

listint_t *add_nodeint_end(listint_t **head, const int n) {
listint_t *new_node = malloc(sizeof(listint_t));
if (new_node == NULL) {
return NULL;
}
new_node->n = n;
new_node->next = NULL;
if (*head == NULL) {
*head = new_node;
} else {
listint_t *temp = *head;
while (temp->next != NULL) {
temp = temp->next;
}
temp->next = new_node;
}
return new_node;
}
