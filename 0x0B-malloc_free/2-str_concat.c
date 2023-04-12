#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: Returns a contatenated string of the first and second string.
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *cat;

	i = size1 = size2 = 0;
	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	/** printf("size1: %d, size2: %d", size1, size2); --> debugging **/
	cat = malloc(size1 + size2 + 1);
	if (cat == NULL)
	{
		fprintf(stderr, "Not enough memory available!");
		return (NULL);
	}
	else
	{
		while (i < (size1 + size2))
		{
			if ( size1 == 0 && size2 ==0)
			{
				break;
			}	
			if (i < size1)
			{
				cat[i] = s1[i];
			}
			else
			{
				cat[i] = s2[i - size1];
			}
			i++;
		}
		return (cat);
	}

}
