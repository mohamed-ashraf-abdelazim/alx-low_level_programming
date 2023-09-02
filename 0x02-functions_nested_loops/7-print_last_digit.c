#include "main.h"

/**
 * print_last_digit - pritns the last digit
 * @n: value
 * Return: 0 success
*/

int print_last_digit(int n)
{
	if (n >= 0)
		n = n % 100;
	else
		n = n % -10;
	return (n);
}
