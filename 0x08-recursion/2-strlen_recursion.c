#include "main.h"

/**
 * _strlen_recursion - returns number of char in string
 * @s: parameter
 * Return: 0 (success)
*/

int _strlen_recursion(char *s)
{
	int num = 0;

	if (*s != '\0')
	{
		_putcahr('\n');
	}
	else
	{
		num++;
		s++;
		_strlen_recursion(*s);
	}
	return (num);
}
