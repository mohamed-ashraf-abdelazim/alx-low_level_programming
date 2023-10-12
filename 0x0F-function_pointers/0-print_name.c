#define "function_pointers.h"

/**
 * print_name - prints a name in either upper or same
 * @name: parameter
 * @f: pointer to two functions
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
