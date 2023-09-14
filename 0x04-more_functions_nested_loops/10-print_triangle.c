#include "main.h"
/**
 * print_triangle - print a triangle followed by a new line
 * @size: The size of the triangle
 * Return: print a new line if size is 0 or less
 */
void print_triangle(int size)
{
int row, hashes, spaces;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (row = 1; row <= size; row++)
{
for (spaces = size - row; spaces >= 1; spaces--)
{
_putchar(' ');
}
for (hashes = 1; hashes <= row; hashes++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
