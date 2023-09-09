#include <stdio.h>
/**
 * main - prints all possible combinations of single digit numbers.
 * Return:0 on success
*/
int main(void)
{
int i = '0';
while (i <= '8')
{
putchar(i);
if (i != '8')
{
putchar(',');
putchar(',');
}
++i;
}
putchar('\n');
return (0);
}
