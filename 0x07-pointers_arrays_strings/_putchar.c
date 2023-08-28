#include <unistd.h>

/**
 * _putchar- writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error,-1is rturned, and errno is set approproately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

