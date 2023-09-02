#include "main.h"

/**
 * print_last_digit - pritns the last digit
 * @n: value
 * Return: 0 success
*/

int print_last_digit(int n)
{
	int ld;

	if (n >= 0)
		ld = n % 10;
	else
		ld = -1 * (n % 10);

	_putchar(ld + '0');
	return (n);
}
