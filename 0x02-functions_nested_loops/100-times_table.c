#include "main.h"

/**
 * print_times_table- Print n times table
 * @n: integer n
 * Description: Prints n times table. If n is greater than 15
 *		or less 0, it would not print.
 */
void print_times_table(int n)
{
	int c, r;

	if ((n >= 0) && (n <= 15))
	{
		for (r = 0; r <= n; r++)
		{
			_putchar('0');
			for (c = 1; c <= n; c++)
			{
				if (r * c >= 0 && r * c <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + r * c);
				}
				else if (r * c > 9 && r * c <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (r * c / 10));
					_putchar('0' + (r * c % 10));
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (r * c / 100));
					_putchar('0' + ((r * c / 10) % 10));
					_putchar('0' + (r * c % 10));
				}
			}
			_putchar('\n');
		}
	}
}
