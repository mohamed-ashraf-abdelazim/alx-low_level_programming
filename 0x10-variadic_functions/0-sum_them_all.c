#include "variadic_functions.h"

/**
 * sum_them_all - sums all the numbers
 * @n: parameter
 * Return: sums
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sums = 0;

	if (n == 0)
		return (0);
	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		int x = va_arg(nums, int);

		sums = sums + x;
	}
	return (sums);
}
