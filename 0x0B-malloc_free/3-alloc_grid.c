#include "main.h"

/**
 * alloc_grid - makes 2D array
 * @width: width of array
 * @height: height of array
 * Return: m or NULL
*/

int **alloc_grid(int width, int height)
{
	int i, j, **m;

	m = malloc(sizeof(int) * height * width);
	if (height <= 0 || width <= 0 || m == 0)
		return (NULL);
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
