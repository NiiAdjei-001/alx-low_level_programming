#include"main.h"
#include <stdio.h>
/**
 * flip_bits - Gets number of bits needed to flip one number to another
 * @n: first number
 * @m: second number
 * Return: Returns the number of flips.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bin, counter = 0;

	bin = n ^ m;

	while (bin)
	{
		if ((bin & 1) == 1)
		{
			counter++;
		}
		bin >>= 1;
	}
	return (counter);
}
