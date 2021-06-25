#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
int flag = 0;

for (i = 0; i <= 100; i++)
{
flag = 0;
if (i % 3 == 0)
{
flag = 1;
printf("Fizz");
}
if (i % 5 == 0)
{
flag = 1;
printf("Buzz");
}
if (!flag)
{
printf("%d", i);
}
if (i < 100)
{
printf(" ");
}
else
{
printf("\n");
}
}
return (0);
}
