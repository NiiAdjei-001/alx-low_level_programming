#include "main.h"

/**
 * _strcpy - Copy string src into dest and returns dest.
 * @dest: destination string value.
 * @src: source string value.
 * Return: Returns dest string reference.
 */
char *_strcpy(char *dest, char *src)
{
	int len;

	len = 0;
	while (*(src + len) != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
