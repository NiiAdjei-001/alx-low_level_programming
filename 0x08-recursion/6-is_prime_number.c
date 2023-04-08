#include "main.h"
/**
 * _is_prime - helper function;
 * @n: number;
 * @i: index
 * Return: some values
 *
 */
int _is_prime(int n, int i)
{
	if (n == 1 || n == 2)
	{
		return (1);
	}
	else if ((n - 1) % 2 == 0)
	{
		return (0);
	}
	else if (i * i > n)
	{
		return (1);
	}
	else
	{
		return (_is_prime(n, ++i));
	}

}

/**
 * _is_prime_number - checks if a number is a prime number.
 * @n: integer number
 *
 * Return: Returns 1 if n is a prime and 0 otherwise.
 */

int _is_prime_number(int n)
{
	return (_is_prime(n, 2));
}
