#include "main.h"

/**
 * _print_reverse_recursion - prints out a string in reverse
 * @s: string pointer
 *
 * Return: Returns nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
		return;
	}
	return;
}