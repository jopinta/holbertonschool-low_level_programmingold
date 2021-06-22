#include "holberton.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: Always 0.
*/

void print_alphabet_x10(void)
{

char i;
int n;
for (n = 0; n <= 10; n++)
{
for (i = 'a'; i <= 'z'; i++)

putchar(i);

putchar('\n');
}
}
