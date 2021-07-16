#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - prints buffer in hexa
 * @min: the address of memory to print
 * @max: the size of the memory to print
 *
 * Return: Nothing.
 */

int *array_range(int min, int max)
{
	int x, i;
	int *p;

	if (min > max)
		return (NULL);

	for (x = 0; x <= (max - min); x++)
		p = malloc(sizeof(int) * x);
	if (!p)
		return (NULL);

for (i = 0; min <= max; i++, min++)
	p[i] = min;
return (p);
}
