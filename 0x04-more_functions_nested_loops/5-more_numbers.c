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

for (i = '0'; i <= 14; i++)
{
for (x = '0'; x <= 11; x++)
{
_putchar(i);
_putchar(x);
}
_putchar('\n');
}
}
