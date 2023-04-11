#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - Creates a character array with a given size.
 * @size: size of array.
 * @c: character.
 *
 * Return: Returns a pointer to created array memory location.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size != 0)
	{
		array = malloc(size * sizeof(char));
		if (array == NULL)
		{
			fprintf(stderr, "Not enough memory left!\n");
			return (NULL);
		}
		i = 0;
		while (i != size)
		{
			array[i] = c;
			i++;
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}
