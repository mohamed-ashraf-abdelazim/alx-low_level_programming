#include "main.h"

/**
 * _strlen - count the numbers of string character
 * @s: pointer
 * Return: 0 is success
*/

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		count++;

	return (count);
}
