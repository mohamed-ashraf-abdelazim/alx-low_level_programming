#include "main.h"


int print_sign(int n)
{
	int s = -1;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (s);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
}
