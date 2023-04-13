#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an array of integers.
 * @a: array
 * @n: number of elements in array to print.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
		printf("%d, ", a[i]);
	printf("%d\n", a[n - 1]);
}
