#include "main.h"

/**
 * _strncat - appends string in src variable to string in dest
 *		variable at n location in dest variable
 * @dest: destination variable.
 * @src: source variable.
 * @n: minimum byte size of source to be used.
 * Return: Returns a pointer to the dest variable.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length, i;

	dest_length = 0;
	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}
	for (i = 0; (i < n) && (src[i] != '\0'); i++)
	{
		dest[dest_length] = src[i];
		dest_length++;
	}
	dest[dest_length] = '\0';
	return (dest);
}

