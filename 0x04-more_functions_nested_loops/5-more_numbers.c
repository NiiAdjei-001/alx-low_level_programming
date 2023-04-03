#include "main.h"

/**
 * more_numbers - Print 10 times, the numbers from 0 to 14.
 *
 * Return: Returns nothing
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if ((j / 10) > 0)
			{
				_putchar(48 + (j / 10));
			}
			_putchar(48 + (j % 10));
		}
		_putchar('\n');
	}
}

