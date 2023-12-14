#include "search_algos.h"

/**
 * _ceil - math ceiline function
 * @val: float value
 * Return: integer ceiline value
 */
int _ceil(double val)
{
	return (val + 0.5);
}
/**
 * print_working_array - print the interval of the array being binary searched
 * @array: array to be binary searched
 * @start_index: start_index
 * @end_index: end_index
 */
void print_working_array(int *array, size_t start_index, size_t end_index)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start_index; i <= end_index; i++)
	{
		if (i != end_index)
		{
			printf("%d, ", array[i]);
		}
		else
		{
			printf("%d\n", array[i]);
		}
	}
}

/**
 * binary_search - binary search through an array
 * @array: input array
 * @size: number of elements in array
 * @value: value to search for in array
 *
 * Return: index of array with value present or -1 value not in array
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start_index, end_index, middle_index;

	if (array == NULL)
	{
		return (-1);
	}
	start_index = 0;
	end_index = size - 1;
	while (start_index < end_index)
	{
		print_working_array(array, start_index, end_index);
		middle_index = _ceil((start_index + end_index) / 2.0);
		if (value < array[middle_index])
		{
			end_index = middle_index;
		}
		else if (value > array[middle_index])
		{
			start_index = middle_index;
		}
		else if (value == array[middle_index])
		{
			return (middle_index);
		}
	}
	return (-1);
}
