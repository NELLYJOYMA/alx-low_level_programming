#include "main.h"
/**
 * print_line - draws a straight line to the terminal
 * @n:  The number of times the character to be printed
 * Result:print \n is n is 0 or less
 */

void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
