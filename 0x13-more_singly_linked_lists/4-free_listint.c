#include "lists.h"

/**
 * free_listint - frees list
 * @head: The pointer to the head
 *
 * Return: Always 0
 */
void free_listint(listint_t *head)
{
listint_t *temp;
while ((temp = head) != NULL)
{
head = head->next;
free(temp);
}
}

