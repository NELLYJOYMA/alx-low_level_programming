#include "lists.h"

/**
 * print_list - print all element in a singly linked list
 *
 * @h: pointer to a linked list head
 * Return: total number of node in the list
 */
size_t print_list(const list_t *h)
{
int i;
if (h == NULL)
return (0);
for (i = 1; h->next != NULL; i++)
{

if (h->str == NULL)

printf("[%u] %s\n", (unsigned int)h->len, "(nil)");
else
printf("[%u] %s\n", (unsigned int)h->len, h->str);
h = h->next;
}
printf("[%u] %s\n", (unsigned int)h->len, h->str);
return (i);
}