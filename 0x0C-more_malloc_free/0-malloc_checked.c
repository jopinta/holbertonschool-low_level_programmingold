#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - check the code for Holberton School students.
 *
 * Return: Always 0.
 *@b: integer for array
*/

void *malloc_checked(unsigned int b)

{

	void *n;

	n = malloc(b);

	if (n == NULL)
		exit(98);

	return (n);
}
