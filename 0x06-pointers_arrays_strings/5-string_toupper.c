#include "holberton.h"
#include <stdio.h>

/**
 * string_toupper - check the code for Holberton School students.
 *
 *@s: algo
 *
 * Return: Always 0.
 */

char *string_toupper(char *s)
{

int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] > 96 && s[i] < 123)
s[i] = s[i] - 32;
}
return (s);
}
