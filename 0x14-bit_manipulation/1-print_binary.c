#include "main.h"

/**
 * print_bi - print the binary representation of a number recursively
 * @n: The decimal input
 *
 * Return: Always 0
 */

void print_bi(unsigned long int n)
{
if (n == 0)
return;
print_bi(n >> 1);
if ((n & 1) == 1)
	_putchar('1');
if ((n & 1) == 0)
_putchar('0');
}

/**
 * print_binary - prints a binary representation of a number
 * @n: Decimal to be converted
 * Return: Always 0
 */
void print_binary(unsigned long int n)
{
if (n == 0)
	_putchar('0');
else
	print_bi(n);
}

