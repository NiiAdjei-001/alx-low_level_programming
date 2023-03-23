#include "main.h"

/**
 * print_sign- determines what integer a number is.
 * @n: an integer number.
 * Description: Determines if an integer is a positive integer,
 *		a negative integer or zero.
 * Return:	1 : is a positive integer.
 *		0 : is a zero.
 *		"-1": is a negative integer.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
