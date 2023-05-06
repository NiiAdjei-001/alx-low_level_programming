#include"main.h"
#include <stdio.h>
/**
 * two_power - derive the power of 2 ( 2 ^ x)
 * @x: power
 * Return: returns an unsigned int
 */
unsigned int two_power(unsigned int x)
{
	if (x == 0)
		return (1);
	else
		return (2 *  two_power(--x));
}

/**
 * binary_len - derive the length of the binary number
 * @b: string of binary numbers
 * Return: returns the length of the binary number
 */
unsigned int binary_len(const char *b)
{
	int len = 0;

	while (*(b + len) != '\0')
		len++;
	return (len);
}
/**
 * binary_to_uint - converts a string of binary to usigned integer
 * @b: binary string
 * Return: converted binary as unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len;
	unsigned int i, dec = 0;

	if (b == NULL)
		return (0);
	len = binary_len(b);
	for (i = 0; i < len; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			dec += (b[i] - '0') * two_power((len - 1) - i);
		else
			return (0);
	}
	return (dec);
}
