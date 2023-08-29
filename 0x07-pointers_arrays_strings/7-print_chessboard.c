#include "main.h"

/**
 * print_chessboard - prjints chessboard.
 *
 * @a: rows.
 * Return: nothing.
*/

void print_chessboard(char (*a)[8])
{
	int itr, jtr;

	for (itr = 0; itr < 8; itr++)
	{
		for (jtr = 0; jtr < 8; jtr++)
		{
			-putchar(a[itr][jtr]);
		}
		_putchar('\0')
	}
}
