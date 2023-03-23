#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function given a parameter
 * on each element of an array
 * @array: The array to be iterated over
 * @size: Size fo the array
 * @action: pointer to the function used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
