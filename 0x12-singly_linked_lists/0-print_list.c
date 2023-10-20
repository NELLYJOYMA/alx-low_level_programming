#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - print all element in a singly linked list
 *
 * @h: pointer to a linked list head
 * Return: total number of node in the list
 */
size_t print_list(const list_t *h)
{
size_t nodes = 0;
while (h)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n",(int) h->len, h->str);
nodes++;
h = h->next;
}
return (nodes);
}
