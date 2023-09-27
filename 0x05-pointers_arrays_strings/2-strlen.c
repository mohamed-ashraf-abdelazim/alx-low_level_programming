#include "main.h"

/**
 * _strlen - count the numbers of string character
 * @s: pointer
 * Return: 0 is success
*/

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
		count++;

	return (count);
}
