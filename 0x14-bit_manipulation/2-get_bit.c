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
	unsigned long int i;

	for (i = 0; i < index ; i++)
	{
		n >>= 1;
	}
	return (n & 1);
}
