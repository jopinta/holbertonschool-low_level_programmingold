#include "holberton.h"
#include <stdio.h>

/**
 *  more_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
int i, x;

for (i = '0'; i <= 9; i++)
{
for (x = '0'; x <= 14; x++)
{
if ((x / 10) != 0)
{
_putchar((x / 10) + '0');
}
_putchar(x % 10 + '0');
}
_putchar('\n');
}
}
