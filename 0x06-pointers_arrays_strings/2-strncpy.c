#include "main.h"

/**
 * _strncpy - copy values in src to dest variable.
 * @dest: destination variable.
 * @src: source variable.
 * @n: minimum byte size of source to be used.
 * Return: Returns a pointer to the dest variable.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (i < n) && (src[i] != '\0'); i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

