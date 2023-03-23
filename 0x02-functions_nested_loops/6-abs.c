#include "main.h"

/**
 * _abs- gets the absolute value of an integer.
 * @n: an integer number.
 * Description: returns the absolute number of the integer value
 * Return: returns the absolute value of the integer.
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
