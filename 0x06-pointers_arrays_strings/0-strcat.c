#include "main.h"

/**
 * _strcat - appends string in src variable to string in dest variable
 * @dest: destination of concatenation
 * @src: string to be concatenated.
 * Return: Returns a pointer to the dest variable.
 */
char *_strcat(char *dest, char *src)
{
	int end, i;

	end = 0;
	i = 0;
	while (dest[end] != '\0')
	{
		end++;
	}
	while (src[i] != '\0')
	{
		dest[end] = src[i];
		end++;
		i++;
	}
	dest[end] = '\0';

	return (dest);
}

