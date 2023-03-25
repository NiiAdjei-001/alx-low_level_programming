#include "main.h"

/**
 * print_times_table- Print n times table
 * @n: integer n
 * Description: Prints n times table. If n is greater than 15
 *		or less 0, it would not print.
 */
void print_times_table(int n)
{
	int c, r, product, next;

	if ((n > 0) && (n <= 15))
	{
		for (r = 0; r <= n; r++)
		{
			for (c = 0; c <= n; c++)
			{
				product = r * c;
				next = r * (c + 1);
				if (product < 10)
				{
					_putchar('0' + product);
				}
				else if ((product >= 10) && (product < 100))
				{
					_putchar('0' + (product / 10));
					_putchar('0' + (product % 10));
				}
				else if (product >= 100)
				{
					_putchar('0' + (product / 100));
					_putchar('0' + ((product / 10) % 10));
					_putchar('0' + (product % 10));
				}
				if (c < n)
				{
					if (next < 10)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					else if (next < 100)
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
}
