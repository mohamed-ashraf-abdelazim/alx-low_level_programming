#include "main.h"

/**
 * free_grid - frees memory in prevoius function
 * @grid: parameter
 * @height: heigt
 * Return: nothing
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
