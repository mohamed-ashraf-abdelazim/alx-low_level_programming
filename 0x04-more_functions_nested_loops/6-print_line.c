#include "main.h"

/**
 * print_line - prints line with long n
 * @n: length of the line
*/

void print_line(int n)
{
	int num;

	if (n > 0)
	{
	for (num = 0; num <= n; num++)
	{
		_putchar('_');
	}
	_putchar('\n');
	}
	else
		_putchar('\n');
}
