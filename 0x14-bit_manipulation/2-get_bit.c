#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @index: The index starting at 0 of the bit you get
 * @n: The number to check the value to return an interger
 * Return: The value of a bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int i;
if (index > sizeof(size_t) * 8)
return (-1);
for (i = 0; i < index; i++)
n = n >> 1;
return ((n & 1));
}
