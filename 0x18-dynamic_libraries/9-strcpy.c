#include "main.h"
#include <stdlib.h>
/**
 * _strcpy - function
 * @dest: var 1
 * @src: var 2
 * Return: Null
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; *(dest + i) != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
