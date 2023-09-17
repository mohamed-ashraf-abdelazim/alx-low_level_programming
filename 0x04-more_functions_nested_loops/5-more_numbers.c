#include "main.h"

/**
 * more_numbers - prints from 0 to 14 ten times
*/

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j / 10);
			_putchar(i % 10);
			if ((i % 10) == 0)
				continue;
		}
		_putchar('\n');
	}
}
