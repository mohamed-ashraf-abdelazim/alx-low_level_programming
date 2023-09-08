#include "main.h"

/**
 * print_last_digit - prints last digit of n
 * @n: parameter
 * Return: always 0
*/

int print_last_digit(int n)
{
	n = n % 10;
	putchar(n);

	return (0);
}
