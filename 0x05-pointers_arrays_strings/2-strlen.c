#include "main.h"

/**
 * _strlen - length of string
 * @s: parameter
 * Return: lenth
*/

int _strlen(char *s)
{
	int len = 0;

	for (; *s != '\0'; s++)
		len++;
	return (len);
}
