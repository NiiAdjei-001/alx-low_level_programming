#include "main.h"
/**
 * print_number - prints an integer value;
 * @n : integer value
 */

void print_number(int n)
{
	int temp, orderOfMag, neg;

	temp = n;
	orderOfMag = 1;
	neg = 0;
	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			neg = 1;
			n *= -1;
		}
		while (temp != 0)
		{
			orderOfMag *= 10;
			temp /= 10;
		}
		if (neg == 1)
			_putchar('-');
		orderOfMag /= 10;
		while (orderOfMag != 0)
		{
			temp = (n / orderOfMag) % 10;
			_putchar('0' + temp);
			orderOfMag /= 10;
		}
	}
}
