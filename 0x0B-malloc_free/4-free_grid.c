#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2d grid
 * @grid: The 2d grid
 * @height: height of 2d grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int count = 0;

	while (count < height)
	{
		free(grid[count]);
		count++;
	}
	free(grid);
}

