#include "main.h"

/**
 * print_line - Print a line
 * @n: length of line in units
 * Return: Returns nothing
 */

void print_line(int n)
{
	int i;

	i = 0;
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

