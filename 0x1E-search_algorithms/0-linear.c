#include "search_algos.h"

/**
 * linear_search - linear search through an array
 * @array: input array
 * @size: number of elements in array
 * @value: value to search for in array
 *
 * Return: index of array with value present or -1 value not in array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
