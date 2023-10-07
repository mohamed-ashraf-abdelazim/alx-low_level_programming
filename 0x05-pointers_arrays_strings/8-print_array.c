#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array
 * @a: parameter
 * @n: parameter
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= (n - 1); i++)
		printf("%i, ", a[i]);
	_putchar('\n');
}
