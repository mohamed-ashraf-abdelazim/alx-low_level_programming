#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: parameter
 * @c: char
 * Return: n
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *n = malloc(sizeof(char) * size);

	if (n == NULL || size == 0)
		return (NULL);
	for (i = 0; i <= size; i++)
	{
		n[i] = c;
	}
	return (n);
	free(n);
}
