#include"main.h"
#include <stdio.h>
/**
 * clear_bit - sets a binary's bit number at a given index to 0
 * @n: unsigned long integer pointer
 * @index: index value
 * Return: Returns the 1 if succesful and 0 on error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bin;

	if (n == NULL)
		return (-1);
	bin = 1;
	bin <<= index;
	*n |= bin;
	return (1);
}
