#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - check the code for Holberton School students.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
int i;
int temp;
for (i = 0; i < n; i++)
{
n--;
temp = a[i];
a[i] = a[n];
a[n] = temp;

}
}

