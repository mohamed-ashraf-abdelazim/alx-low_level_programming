#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - greater than 5 or less than 6 or equal 0
 *
 * Return: 0 (success)
*/
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	else if (last_digit == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else if (last_digit < 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	return (0);
}
