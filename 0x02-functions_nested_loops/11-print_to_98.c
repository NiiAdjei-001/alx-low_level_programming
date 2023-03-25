#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints a series of numbers from a given start point to 98;.
 * @n: starting integer
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
