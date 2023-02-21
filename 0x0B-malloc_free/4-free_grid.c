#include <stdio.h>
#include <stdlib.h>
/**
 * free grid - creates a grid array
 *
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
