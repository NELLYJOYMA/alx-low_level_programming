#include "main.h"

/**
 * set_bit - Sets the value of a byte
 * @n: pointer to the number
 * @index: position of a byte
 * Return: Always 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int mask;
if (index > sizeof(unsigned int) * 8)
return (-1);
mask = 1;
mask = mask << index;
*n = ((*n) | mask);
return (1);
}
