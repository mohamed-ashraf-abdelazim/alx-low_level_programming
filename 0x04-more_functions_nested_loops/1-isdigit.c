#include "main.h"

/**
 * _isdigit - checks if its a digit or not
 * @c: parameter
 * Return: 1 is digit 0 id not
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
