#include "main.h"

/**
 * is_prime_number - checks prime num
 * @n: parameter
 * @oth: parameter
 * Return: 0 not 1 prime
*/

int check_prime(int n, int oth);
int is_prime_number(int n)
{
	check_prime(n, 2);
}

/**
 * check_prime - checks prime numbers
 * @n: parameter
 * @oth: parameter
 * Return: 0 not 1 not
*/

int check_prime(int n, int oth)
{
if (oth >= n && n > 1)
	return (1);
else if (n % oth == 0 || n <= 1)
	return (0);
else
	return (check_prime(n, oth + 1))
}
