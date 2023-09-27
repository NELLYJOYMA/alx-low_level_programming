#include "main.h"
/**
 * int factorial - return the factorial of a given number
 * @n: The given number
 * Return: if n is lower than 0 return -1
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
return (n * factorial(n - 1));
}
