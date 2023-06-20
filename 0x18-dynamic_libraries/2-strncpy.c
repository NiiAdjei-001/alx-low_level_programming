#include "main.h"
#include <stdlib.h>
/**
 * _strncpy - function
 * @dest: var 1
 * @src: var 2
 * @n: var 3
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n || *(dest + i) == '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
