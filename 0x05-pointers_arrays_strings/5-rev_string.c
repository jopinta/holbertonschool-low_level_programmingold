#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - check the code for Holberton School students.
 *
 * Return: Always 0.
 *@s: string
*/


void rev_string(char *s)
{

int i, b, x;


for (i = 0; s[i] != '\0'; i++)
{
}

i = i - 1;

for (b = 0; b <= i; b++, i--)
{
x = s[b];
s[b] = s [i];
s[i] = x;
}
}
