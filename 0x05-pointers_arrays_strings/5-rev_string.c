#include "main.h"

/**
 * rev_string - reverses the string
 * @s: parameter
*/

void rev_string(char *s)
{
	int length, i, middle;
	char temp;

	for (length = 0; *s != '\0'; s++)
		 length++;
	middle = length / 2;
	for (i = 0; i < middle; i++)
	{
		s[i] = temp;
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
