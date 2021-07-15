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
	int **p = NULL;
	int i, j;


	if (p)

		p = malloc(height * sizeof(int *));
			if (!p)
				return (NULL);

			for (i = 0; i < height; i++)
	{

				p[i] = malloc(width * sizeof(int));
		if (!p)
			return (NULL);

		{
			for (j = 0; j < width; j++)
				p[i][j] = 0;
		}
	}
					return (p);
}
