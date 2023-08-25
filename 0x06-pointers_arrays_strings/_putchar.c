#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: on sucess
 * on error, -1 is returned , and error is appropriately.
*/
int _putcgar(char c)
{
	return (write(1, &c, 1));
}
