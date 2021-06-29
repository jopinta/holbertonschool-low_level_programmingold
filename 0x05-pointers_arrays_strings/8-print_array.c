#include "holberton.h"
#include <stdio.h>
/**
 * print_array - check the code for Holberton School students.
 *
 * Return: Always 0.
 *@a: ptr
 *@n: ???umber of elements of the array t
*/

void print_array(int *a, int n)
{

int i;

for (i = 0; i <= n - 1; i++)
{
printf("%i", a[i]);

if (i != n - 1)
printf(", ");
}
printf("\n");
}
