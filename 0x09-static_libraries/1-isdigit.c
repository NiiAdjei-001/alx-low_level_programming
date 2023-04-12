#include "main.h"

/**
 * _isdigit -  Checks for digit character
 * @c: character input
 * Return: Returns 1 if character input is digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

