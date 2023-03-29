#include "main.h"
/**
 * _strlen - returns the length of a string
 *
 * @s - pointer to string variable,
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	
	while ( *(s + count) != '\0')
	{
		count++;
	}
	return (count);
}
