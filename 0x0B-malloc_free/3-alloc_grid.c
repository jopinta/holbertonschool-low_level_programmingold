#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - prints a grid of integers
 * the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */


int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;


	if (width <= 0 || height <= 0)
		return (NULL);

	p = (int **)malloc(height * sizeof(int *));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{

		p[i] = (int *)malloc(width * sizeof(int));
		if (!p[i])
		{
			for (j = 0; j < i; j++)
				free(p[i]);
			free(p);
			return (NULL);
		}
			for (j = 0; j < width; j++)
				p[i][j] = 0;
		}
					return (p);
}
