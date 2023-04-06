#include "main.h"

/**
 * reverse_array - reverses the content of an integer array..
 * @a: integer array.
 * @n: number of elements in array.
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[(n - 1) - i];
		a[(n - 1) - i] = a[i];
		a[i] = temp;
	}
}

