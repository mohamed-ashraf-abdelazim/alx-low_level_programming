#include "main.h"

/**
 * print_last_digit - prints last digit of n
 * @n: parameter
 * Return: always 0
*/

int print_last_digit(int n)
{
	if (n >= 0)
		n = n % 10;
	else
		n = -1 * (n % 10);
	_putchar(n);

	return (0);
}
