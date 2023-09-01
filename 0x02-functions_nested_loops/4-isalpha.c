#include "main.h"

/**
 * _isalpha- checks if c is a letter  alphapet
 *
 * @c: varaible to check
 * Retrun: 1 is alphapet 0 is not
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
