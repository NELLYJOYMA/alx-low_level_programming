#include <stdio.h>
#include <ctype.h>
/**
 * main -Entry point
 * Retrn:Always 0
*/
int main (void )
{
int lowercase = 'a';
while (lowercase <= 'z')
{
putchar(lowercase);
lowercase += 1;
}
putchar ('\n');
return (0);
}
