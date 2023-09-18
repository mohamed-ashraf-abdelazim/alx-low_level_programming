#include "main.h"

/**
 * print_diagonal - prints diagonal
 * @n: length of diagonal
*/

void print_diagonal(int n)
{
	int num;

	if (n > 0)
	{
	for (num = 1; num <= n; num++)
	{
		if (num == 1)
			continue;
		else if (num > 1)
			_putchar(' ');

	}
	_putchar('\\');
	_putchar('\n');
	}
	else
		_putchar('\n');
}
