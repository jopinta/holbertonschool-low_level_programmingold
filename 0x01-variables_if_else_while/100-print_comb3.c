#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int x;

for (i = '0'; i <= '9'; i++)
{
for (x = '0'; x <= '9'; x++)
{
putchar(i);
putchar(x);
      
if (i == '9' && x == '9')
{
continue;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
