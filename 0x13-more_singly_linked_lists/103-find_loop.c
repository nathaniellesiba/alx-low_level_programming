#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer
 * Return: The address of the node, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *tort = head, *hare = head;

while (tort && hare && hare->next)
{
tort = tort->next;
hare = hare->next->next;
if (tort == hare)
{
hare = head;
while (hare != tort)
{
hare = hare->next;
tort = tort->next;
}
return (tort);
}
}

return (NULL);
}
