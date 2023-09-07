#include "main.h"

/**
 * _isalpha - checks if c alphapet lower or highe case
 * @c: parameter
 * Return: 1 is alphapet 0 is not
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
