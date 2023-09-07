#include "main.h"

/**
 * print_sign - print th sign of the number
 * @n: parameter
 * Return: 0 if  number equal to zero and -1 if number
 * less than zero and 1 if bigger than zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
