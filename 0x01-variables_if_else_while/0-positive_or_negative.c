#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : Positive or negative
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf(n, "is positive\n");
	else if (n == 0)
		printf(n, "is zero\n");
	else
		ptintf(n, "is negative\n");
	return (0);
}
