#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - prints a grid of integers
 *  the address of the two dimensional grid
 * @grid: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */


	void free_grid(int **grid, int height)

	{
		int r = 0;

	for (r = 0; r < height; r++)
	{
		free(grid[r]);
	}
	free(grid);
}
