#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a list
 * @index: The index of a node starting with zero
 * @head: The pointer to head of a pointer
 * Return: Null if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int a;
for (a = 0; a < index; a++)
{
if (head == NULL)
return (NULL);
head = head->next;
}
return (head);
}
