#include "main.h"

/**
 * print_rev- Print the reverse of a string.
 *
 * @s: string variable to be reveresed.
 *
 * Return: Reutrns nothing
 */
void print_rev(char *s)
{
	int length;

	length = 0;
	while (*(s + length) != '\0')
	{
		length++;
	}
	while (length > 0)
	{
		_putchar(*(s + (length - 1)));
		length--;
	}
	_putchar('\n');
}
