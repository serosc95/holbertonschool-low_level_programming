#include"holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - pfrees a 2 dimensional grid.
 * @grid: double pointer.
 * @height: integer.
 * Return: void.
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != '\0' && height != 0)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
		free(grid);
	}
}
