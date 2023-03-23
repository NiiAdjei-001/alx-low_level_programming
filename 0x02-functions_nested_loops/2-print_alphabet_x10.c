#include "main.h"

/**
 * print_alphabet_x10 - function to print lower case alphabets.
 *
 * Return: 0 (Succcess)
 */
void print_alphabet_x10(void)
{
	int x = 0;

	while (x != 10)
	{
		int n = 97;

		while (n != 123)
		{
			_putchar((char)n);
			n++;
		}
		_putchar('\n');
		x++;
	}
}
