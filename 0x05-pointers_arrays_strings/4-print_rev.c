#include "holberton.h"

/**
 *  print_rev - check the code for Holberton School students.
 *
 *@s: string
 * Return: Always 0.
 */

void print_rev(char *s)
{

int i, c;

for (c = 0; s[c] != '\0'; c++)
{
}

for (i = c - 1; i >= 0; i--)
_putchar(s[i]);

_putchar('\n');
}
