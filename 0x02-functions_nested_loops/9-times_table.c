0;10;1c#include "holberton.h"
#include <stdio.h>


/*
* print_something - function to print something
* times_table - (void)
* Return: Always 0
**/

void times_table(void)
{

int i, j, num = 9;
for (i = 0; i < num + 1; i++)
{
for (j = 0; j < num + 1; j++)
{
printf("%d", i * j);
if (j < num)
{
printf(", ");
}
}
printf("\n");
}
}
