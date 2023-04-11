#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Create a copy of a string parameter.
 * @str: string value.
 * Return: returns a new pointer containing a copy of str.
 */

char *_strdup(char *str)
{
	unsigned int i, size;
	char *cpy;

	if (str == NULL)
		return (NULL);
	i = 0;
	size = sizeof(str);
	cpy = malloc(size);
	if (cpy == NULL)
	{
		fprintf(stderr, "Not enough memory available!\n");
		return (NULL);
	}
	while (i < size)
	{
		cpy[i] = str[i];
		i++;
	}
	return (cpy);
}
