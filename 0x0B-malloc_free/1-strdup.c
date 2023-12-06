#include "main.h"

/**
 * *_strdup - copy string to new string
 * @str: string to be copied
 * Return: new string
*/

char *_strdup(char *str)
{
	char *nstr = malloc(strlen(str) * sizeof(char));
	long unsigned int i;

	if (str == NULL)
		return (NULL);
	while(i<=strlen(str))
	{
		nstr = imalloc(INT_MAX);
		if (nstr == NULL)
		{
			fprintf(stderr, "failed to allocate memory\n");
		}

	}
	for (i = 0; i <= strlen(str); i++)
	{
		nstr[i] = str[i];
	}
	return (nstr);
	free(nstr);
}
