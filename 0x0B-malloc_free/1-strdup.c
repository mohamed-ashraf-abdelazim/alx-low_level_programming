#include "main.h"

/**
 * *_strdup - copy string to new string
 * @str: string to be copied
 * Return: new string
*/

char *_strdup(char *str)
{
	char *nstr = malloc((strlen(str) + 1) * sizeof(char));
	unsigned int i;

	if (str == NULL)
		return (NULL);
	if (nstr == 0)
		return (NULL);
	else
	{
		for (i = 0; i <= strlen(str); i++)
		{
		nstr[i] = str[i];
		}
		nstr[i + 1] = '\0';
	}
	return (nstr);
	free(nstr);
}
