#include "main.h"

/**
 * _strlen - measure string length
 * @s: string
 * Return: string length
*/

int _strlen(char *s)
{
	int len = 0;

	for (; *s != '\0'; s++)
		len++;
	return (len);
}

/**
 * str_concat - point to new location contain the content of two pointers
 * @s1: string one
 * @s2: string two
 * Return: pointer
*/

char *str_concat(char *s1, char *s2)
{
	char *nstr;
	int size1, size2, i;

	size1 = _strlen(s1);
	size2 = _strlen(s2);

	nstr = malloc(sizeof(char) * (size1 + size2) + 1);
	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	if (nstr == 0)
		return (0);
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			nstr[i] = s1[i];
		else
			nstr[i] = s2[i - size1];
	}
	return (nstr);
	free(nstr);
}
