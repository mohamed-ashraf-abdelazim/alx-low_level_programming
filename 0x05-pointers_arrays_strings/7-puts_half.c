#include "main.h"

/**
 * puts_half - print last half of string
 * @str: parameter
*/

void puts_half(char *str)
{
	int i, len, middle, n;

	for (len = 0; *str != '\0'; str++)
		len++;
	n = (len - 1) / 2;
	middle = len / 2;
	if (len % 2 == 0)
	{
		for (i = 0 ; i > middle; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
	else
	{
		len = len - 1;
		for (i = 0 ; i > middle; i++)
			_putchar(str[i]);
		_putchar(n);
		_putchar('\n');

	}
}
