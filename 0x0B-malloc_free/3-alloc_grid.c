#include "main.h"

/**
 * alloc_grid - makes 2D array
 * @width: width of array
 * @height: height of array
 * Return: m or NULL
*/

int **alloc_grid(int width, int height)
{
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);
	int *m = malloc(sizeof(int) * height * width);

	for (i = 0 ; i <= height ; i++)
	{
		for (j = 0; j <= width; j++)
		{
			m[i][j] = 0;
		}
	}
	return (m);
	free(m);
}
