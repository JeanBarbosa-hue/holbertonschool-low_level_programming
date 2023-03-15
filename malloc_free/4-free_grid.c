#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free space
 *
 * @grid: double pointer
 * @height:integer
 *
 */

void free_grid(int **grid, int height)
{
	int c;

	for (c = 0; c < height; c++)
	free(grid[c]);
	free(grid);
	

}
