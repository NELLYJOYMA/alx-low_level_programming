#include "main.h"
/**
 * print_square - Print a square followed by a new line.
 *@size: Is the size of the square
 * Return: Print a new line if the size is 0 or less
 */
void print_square(int size)
{
int i, j;
if (size <= 0)
_putchar('\n');
for (i = 0; i < size; i++)
{
for (j = 0; j < (size); j++)
{
_putchar('#');
}
_putchar('\n');
}
}
