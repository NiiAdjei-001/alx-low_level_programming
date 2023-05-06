#include"main.h"
#include <stdio.h>
/**
 * set_bit - sets a binary's bit number at a given index to 1
 * @n: unsigned long integer pointer
 * @index: index value
 * Return: Returns the bit value at the given index.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bin;

	if (n == NULL)
		return (-1);
	bin = 1;
	bin <<= index;
	*n |= bin;
	return (1);
}
