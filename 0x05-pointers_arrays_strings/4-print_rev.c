#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: parameter
*/

void print_rev(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	while (len--)
		_putchar(s[len]);
	_putchar('\n');
}
