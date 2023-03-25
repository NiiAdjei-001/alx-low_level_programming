#include "main.h"

/**
 * jack_bauer()- prints the count of 24 hours.
 *
 * Description: Prints the time format from 00:00 to 23:59.
 *
 */
void jack_bauer(void)
{
	int c, h1, h2, m1, m2;

	c = 0;
	h1 = 0;
	h2 = 0;
	m1 = 0;
	m2 = 0;

	while (c < 1440)
	{
		_putchar('0' + h1);
		_putchar('0' + h2);
		_putchar(':');
		_putchar('0' + m1);
		_putchar('0' + m2);
		_putchar('\n');
		m2++;
		if (m2 > 9)
		{
			m1++;
			m2 = 0;
			if (m1 > 5)
			{
				h2++;
				m1 = 0;
				if (h2 > 9)
				{
					h1++;
					h2 = 0;
				}
			}
		}
		c++;
	}
}
