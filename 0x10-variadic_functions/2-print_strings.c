#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints a string followed by a new line
 * @separator: the string to be printed
 * @n: the number of string passed
 *
 * Return: Always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

char *str;

va_list ptr_str;

va_start(ptr_str, n);

for (i = 0; i < n; i++)

{
str = va_arg(ptr_str, char *);

if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(ptr_str);
}

