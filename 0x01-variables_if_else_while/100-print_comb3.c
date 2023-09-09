#include <stdio.h>

/**
 * main - function to print combinations of two numbers
 * Return: 0
 */
int main(void)
{
int i = '1';
int j;

while (i <= '9')
{
j = '0';
while (j <= '9')
{
if (!(i > j) || i == j)
{
putchar(i);
putchar(j);
if (i == '9' && j == '9')
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
j++;
}
i++;
}

return (0);
}
