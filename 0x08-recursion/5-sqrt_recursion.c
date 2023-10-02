#include "main.h"

/**
 * _sqrt_recursion - return square of num
 * @n: parameter
 * @val: parameter
 * Return: result
*/

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - return square
 * @n: parameter
 * @val: parameter
 * Return: results
*/

int square(int n, int val)
{
if (val * val == n)
	return (val);
else if (val * val < n)
	return (square(n, val + 1));
else
	return (-1);
}
