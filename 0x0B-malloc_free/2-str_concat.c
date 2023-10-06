#include "main.h"

/**
 * _strlen - size of string
 * @s: parameter
 * Return: size
*/

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * *str_concat - connects two strings with each other
 * @s1: parameter
 * @s2: parameter
 * Return: 0 or m
*/

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *m;

	if (s2 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);

	size1 = _strlen(s1);
	size2 = _strlen(s1);
	m = malloc((size1 + size2) * sizeof(char) + 1);
	if (m == 0)
		return (0);
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			m[i] = s1[i];
		else
			m[i] = s2[i - size1];
	}
	m[i] = '\0';
	return (m);
}
