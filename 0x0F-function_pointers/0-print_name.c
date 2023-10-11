#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name -  Prints a name
 * @name: Name of a person
 * @f : Variable to hold the string name
 * Return: Always 0
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
(*f)(name);
}
