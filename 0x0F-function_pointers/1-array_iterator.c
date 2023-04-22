#include "function_pointers.h"
/**
 * array_iterator - performs a function on an array of integers.
 *
 * @array: array of integers
 * @size: size of array
 * @action: pointer to function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; (size_t) i < size; i++)
	{
		(*action)(array[i]);
	}
}
