#include "main.h"

/**
 * clear_bit - sets the value of a byte
 * @n: Pointer to the number
 * @index: Positon to change
 *
 * Return: 1 if it worked -1 if not worked
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int mask;
mask = 1;
mask = mask << index;
if (index > sizeof(unsigned long int) * 8 || n == NULL)
return (-1);
if (((*n >> index) & 1) == 1)
*n = mask ^ *n;
return (1);
}
