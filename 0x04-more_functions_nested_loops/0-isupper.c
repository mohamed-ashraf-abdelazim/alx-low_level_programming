#include "main.h"

/**
 * _isupper - checks if the character is uppercase
 * @c: parameter
 * Return: 1 is upper 0 is not
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
