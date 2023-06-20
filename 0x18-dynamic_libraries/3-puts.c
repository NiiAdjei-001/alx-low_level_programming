#include "main.h"

/**
 * _puts - Prints a string followed by a new line.
 *
 * @str: String Variable
 *
 * Return: Returns nothing
 */
void _puts(char *str)
{
	int count;

	count = 0;
	while (*(str + count) != '\0')
	{
		_putchar(*(str + count));
		count++;
	}
	_putchar('\n');
}
