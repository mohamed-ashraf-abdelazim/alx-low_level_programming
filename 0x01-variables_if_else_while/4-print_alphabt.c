#include <stdio.h>

/**
 *main - Entry point
 *
 * Description: print alphapet except e and q
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
			ch++;
		putchar(ch);
		ch++;
	}
	return (0);

}
