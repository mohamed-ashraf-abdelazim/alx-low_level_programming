#include "main.h"

/**
 * rev_string - reverses the string
 * @s: parameter
*/

void rev_string(char *s)
{
	int l, i;
	char temp;

	/* calculates the length of string */
	for (l = 0; s[l] != '\0'; l++)
		;
	/* reverse the string by swapping it*/
	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = temp;
	}
}
