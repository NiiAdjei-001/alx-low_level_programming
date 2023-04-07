#include "main.h"

/**
 * _strlen_recursion - Get length of string
 * @s: String variable
 *
 * Return: Returns the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
