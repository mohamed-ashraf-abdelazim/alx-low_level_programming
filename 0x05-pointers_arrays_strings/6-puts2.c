#include "main.h"

/**
 * puts2 - prints other character
 * @str: parameter
*/

void puts2(char *str)
{
	while (*str != '\0')
	{
		str = str + 2;
		_putchar(*str);
	}
	_putchar('\n');
}
