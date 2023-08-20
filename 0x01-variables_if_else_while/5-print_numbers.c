#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print from 0 to 9
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int bo = '0';

	while (bo < 10)
	{
		printf("%d", bo);
		bo++;
	}
	return (0);

}
