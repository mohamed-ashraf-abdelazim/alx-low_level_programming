#include "main.h"

/**
 * _abs - prints absolute value of number
 * @n: parameter
 * Return: 0 sucess
*/

int _abs(int n)
{
	if (n >= '0')
		_putchar(n);
	else
	{
		int z = n * -1;

		_putchar(z);
	}
	return (0);
}
