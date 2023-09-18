#include <stdio.h>
/**
 * _strlen - The function that returns a length of a string
 * @str: The lenght of the  string 
 * Return: the lenght of the @str
 */
size_t _strlen(const char *str)
{
size_t length = 0;
while (*str++)
length++;
return (length);
}
