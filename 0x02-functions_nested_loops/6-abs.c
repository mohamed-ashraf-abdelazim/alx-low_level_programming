#include "main.h"

/**
 * _abs - prints the absolute value of number
 * @n: value
 * Return: (0) success
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
