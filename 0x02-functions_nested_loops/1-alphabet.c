#include "main.h"

/**
 * print_alphabet - function to print lower case alphabets.
 *
 * Return: 0 (Succcess)
 */
void print_alphabet(void)
{
	int n = 97;

	while (n != 123)
	{
		_putchar((char) n);
		n++;
	}
	_putchar('\n');
}
