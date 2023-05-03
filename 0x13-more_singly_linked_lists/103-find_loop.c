#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* struct listint_s - singly linked list
* @n: integer
* @next: points to the next node
*
* Return: loop addresses
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
listint_t *bose = head, *hare = head;

while (bose && hare && hare->next) {
bose = bose->next;
hare = hare->next->next;
if (bose == hare) {
hare = head;
while (hare != bose) {
hare = hare->next;
bose = bose->next;
}
return bose;
}
}

return NULL;
}
