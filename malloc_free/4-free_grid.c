#include "main.h"
#include <stdlib.h>

/**
 *
 *
 *
 *
 */

void free_grid(int **grid, int height)
{
	int c;

	for (c = 0; c < height; c++)
	free(grid[c]);
	free(grid);

}
