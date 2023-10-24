#include "lists.h"

/**
 * sum_listint - Return the sum of all the data
 * @head: The pointer to the head
 *
 * Return: Always 0
 */
int sum_listint(listint_t *head)
{
int sum = 0;
if (head == NULL)
return (0);
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
