#include "main.h"

/**
 * _strlen_recursion - returns number of char in string
 * @s: parameter
 * Return: 0 (success)
*/

int _strlen_recursion(char *s)
{
	int num;

	if (*s != '\0')
	{
		_putchar('\n');
	}
	else
	{
		num = num + 1;
		_strlen_recursion(s++);
	}
	return (num);
}
