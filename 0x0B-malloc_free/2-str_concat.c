#include "main.h"

/**
 * str_concat - point to new location contain the content of two pointers
 * @s1: string one
 * @s2: string two
 * Return: pointer
*/

char *str_concat(char *s1, char *s2)
{
	char *nstr;

	nstr = malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);
	unsigned int i;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	if (nstr == 0)
		return (0);
	for (i = 0; i <= strlen(s1) + strlen(s1); i++)
	{
		if (i < strlen(s1))
			nstr[i] = s1[i];
		else
			nstr[i] = s2[i - strlen(s1)];
	}
	return (nstr);
	free(nstr);
}
