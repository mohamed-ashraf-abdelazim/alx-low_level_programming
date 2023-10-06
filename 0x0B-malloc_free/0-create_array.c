#include "main.h"

/**
 * *create_array - creates an array
 * @size: parameter
 * @c: parameter
 * Return: n or 0 in case of null
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);
	while (size--)
		n[size] = c;
	return (n);
}
