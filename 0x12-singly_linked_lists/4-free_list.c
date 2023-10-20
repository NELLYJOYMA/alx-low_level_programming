#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the  linked list
 * Return: Always 0
 */
void free_list(list_t *head)
{
list_t *current_node;
while ((current_node = head) != NULL)
{
head = head->next;
free(current_node->str);
free(current_node);
}
}
