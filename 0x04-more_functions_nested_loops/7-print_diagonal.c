#include "main.h"
/**
 * print_diagonal - Draw a diagonal line on the terminal
 * @n: The number of times the character \ should be printed
 * Return: Print \n if the n is 0 or less
 */
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
_putchar('\n');
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
