#include "main.h"
/**
 * _puts_recursion - print a string followed by a new line
 *@s: The string to be printed
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
_puts_recursion(s + 1);
}
if (*s == '\0')
{
_putchar('\n');
}
}
