#include "main.h"

/**
 * _pow_recursion - raise x to power of y
 * @x: parameter
 * @y: parameter
 * Return: -1 if y less than 0
*/

int _pow_recursion(int x, int y)
{
	int i = 0;

	if (y < 0)
	{
		return (-1);
	}
	else if (i <= y)
		return (x *  _pow_recursion(x, y));
}
