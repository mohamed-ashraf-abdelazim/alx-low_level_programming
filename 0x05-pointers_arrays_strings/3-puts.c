#include "main.h"

/**
 * _puts - prints the string
 * @str: parameter
*/

void _puts(char *str)
{

	for (; *str != '\0'; str++)
		_putchar(*str);
}
