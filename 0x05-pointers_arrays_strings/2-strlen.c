#include "main.h"

/**
 * _strien - returns the length of string
 *
 * @s: string prameters input
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
