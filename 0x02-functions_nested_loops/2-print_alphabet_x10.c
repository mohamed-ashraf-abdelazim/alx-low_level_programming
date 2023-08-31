#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
*/

void print_alphabet_x10(void)
{
	int num = 1;

	while (num <= 10)
	{
		int ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		num++;
	}
}
