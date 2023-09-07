#include "main.h"

/**
 * _islower - checks if the letter is lowercase alphapet
 * @c: parameter
 * Return: 1 is lowercase 0 is not
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
