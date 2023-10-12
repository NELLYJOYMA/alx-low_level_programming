#include "variadic_functions.h"
#include "stdio.h"
/**
 * print_numbers - prints numbers
 * @separator: the string to be printed between numbers
 * @n: The number of interger to be printed
 *
 * Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, arr;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
{
	arr = va_arg(ptr, const unsigned int);
	printf("%d", arr);
	if (i != (n - 1) && separator != NULL)
	printf("%s", separator);
}
printf("\n");
va_end(ptr);
}
