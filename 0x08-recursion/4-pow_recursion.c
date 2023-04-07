#include "main.h"

/**
 * _pow_recursion - gets the power of a base number [ x ^ y ]
 * @x: base number
 * @y: exponent number
 *
 * Return: Power of x ^ y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
