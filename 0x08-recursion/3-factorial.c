#include "main.h"

/**
 * factorial - returns factorial of a numeber
 * @n: parameter
 * Return: number
*/

int factorial(int n)
{
	if  (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
