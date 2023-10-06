#include "main.h"

/**
 * *_strdup - copy string to another
 * @str: parameter
 * Return: m or null
*/

char *_strdup(char *str)
{
	char *m;
	int i = 0, size = 0;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
	;

	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
		return (NULL);
	for (; i < size; i++)
		m[i] = str[i];
	return (m);
}
