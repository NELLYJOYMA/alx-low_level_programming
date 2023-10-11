#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - A function that executes a function
 * @size: The size of the array
 * @array: The target array
 * @action: A pointer to a string you need to use
 *
 * Return: Always 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
	return;
for (i = 0; i < size; i++)
{
action(*array);
array++;
}
}

