#include <stdio.h>
/**
 * swap_int - swapping two intergers.
 * @a: The first interger to be swipped
 * @b: The second interger to be swipped
 * Return: Always 0
 */
void swap_int(int *a, int *b)
/* the function that swaps the value of two intergers */
{
int temp = *a;
*a = *b;
*b = temp;
}
