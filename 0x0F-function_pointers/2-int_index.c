#include "function_pointers.h"

/**
 * int_index - compare numbers
 * @cmp: pointer to function
 * @size: size of an array
 * @array: array
 * Return: i or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
