#include "main.h"

/**
 * print_numbers - Print the numbers from 0 to 9
 *
 * Return: Returns nothing
 */

void print_numbers(void)
{
	int i;

	i = 0;
	for (i = 0; i < 10; i++)
	{
		_putchar(48 + i);
	}
	_putchar('\n');
}

