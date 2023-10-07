#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: parameter
*/

void print_rev(char *s)
{
	for (; *s != '\0'; s++)
	;
	for (; *s != '\0'; s--)
		_putchar(*s);
	_putchar('\n');
}
