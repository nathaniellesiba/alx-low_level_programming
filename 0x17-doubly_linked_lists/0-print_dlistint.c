#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
 
// Structure for a node in the doubly linked list
typedef struct Node 
{
    int data;
    struct Node* prev;
    struct Node* next;
} 
dlistint_t;
 
/**
 *@dlistint_t: structure of node
*print_dlistint - take pntr to h of lst
*main - create 3 nodes
*return: 0 on success
 */
size_t print_dlistint(const dlistint_t *h) 
{
    size_t count = 0;
    
    
    while (h != NULL) 
	{
        printf("%d ", h->data);
        h = h->next;
        count++;
    }
    
    return (count);
}
 
int main(void) 
{
    
    dlistint_t* head = NULL;
    dlistint_t* second = NULL;
    dlistint_t* third = NULL;
    
    head = (dlistint_t*)malloc(sizeof(dlistint_t));
    second = (dlistint_t*)malloc(sizeof(dlistint_t));
    third = (dlistint_t*)malloc(sizeof(dlistint_t));
    
    head->data = 1;
    head->prev = NULL;
    head->next = second;
    
    second->data = 2;
    second->prev = head;
    second->next = third;
    
    third->data = 3;
    third->prev = second;
    third->next = NULL;
    
  
    size_t count = print_dlistint(head);
    printf("\nNumber of nodes: %zu\n", count);
    
   
    free(head);
    free(second);
    free(third);
    
    return (0);
}
