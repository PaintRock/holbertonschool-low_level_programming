#include <stdio.h>
#include <stdlib.h>
/**
 *free_grid - creates a grid array
 *@grid: a grid
 *@height: high
 *Return: void
 *
 */
void free_grid(int **grid, int height)

{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
