#include"main.h"
#include <stdio.h>
/**
 * get_bit - gets a binary's bit number at a given index
 * @n: unsigned long integer
 * @index: index value
 * Return: Returns the bit value at the given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i, checker_n, checker_i;

	checker_n = n;
	checker_i = 0;
	while (checker_n != 0)
	{
		if (checker_n / 2)
			checker_i++;
		checker_n /= 2;
	}
	if (index > checker_i)
		return (-1);
	for (i = 0; i < index ; i++)
	{
		n >>= 1;
	}
	return (n & 1);
}
