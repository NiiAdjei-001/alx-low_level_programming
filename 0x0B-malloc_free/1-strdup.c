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
	{
		return (NULL);
	}
	else
	{
		i = 0;
		size = 0;
		while (str[size] != '\0')
		{
			size++;
		}
		cpy = malloc(size + 1);
		if (cpy == NULL)
		{
			fprintf(stderr, "Not enough memory available!\n");
			free(cpy);
			return (NULL);
		}
		else
		{
			while (i < size)
			{
				cpy[i] = str[i];
				i++;
			}
			return (cpy);
		}
	}
}
