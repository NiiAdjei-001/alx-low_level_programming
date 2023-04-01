#include "main.h"

/**
 * print_most_numbers - Print the numbers from 0 to 9 except 2 and 4
 *
 * Return: Returns nothing
 */

void print_most_numbers(void)
{
	int i;

	i = 0;
	for (i = 0; i < 10; i++)
	{
		if (!(i == 2 || i == 4))
		{
			_putchar(48 + i);
		}
	}
	_putchar('\n');
}

