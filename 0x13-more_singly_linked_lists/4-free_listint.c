/**
* free_listint: frees a listint
*
* @head: pointer to the head
* struct listint_s - singly linked list
* @n: integer
* @next: points to the next node
*
* Return: void
* Description: singly linked list node structure
*
*/

void free_listint(listint_t *head)
{
listint_t *temp;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}
