#include "function_pointers.h"

/**
 * array_iterator - print array
 * @array: parameter
 * @size: size of array
 * @action: pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);

}
