#include "main.h"
#include <ctype.h>

/**
 * _islower - function to determine if the charachter is lowercase
 *
 * @c: parameter to determine if the letter is lowercase
 *
 * Retrun: (1) is lowercase (0) is not
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
