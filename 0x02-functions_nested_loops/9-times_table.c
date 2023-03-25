#include "main.h"

/**
 * times_table- print the times table..
 *
 * Description: Prints the time table.
 *
 */
void times_table(void)
{
	int c, r, product, next;

	for (r = 0; r < 10; r++)
	{
		for (c = 0; c < 10; c++)
		{
			product = r * c;
			next = r * (c + 1);
			if (product < 10)
			{
				_putchar('0' + product);
			}
			else
			{
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
			}
			if (c < 9)
			{
				if (next < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
