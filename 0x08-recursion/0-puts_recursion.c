#include "main.h"

/*
 *_puts_recursion - prints a full string
 * @s: parameter
*/

void _puts_recursion(char *s)
{
	for (; *s != '\0'; s++)
	_putchar(*s);

	_putchar('\n');
}
