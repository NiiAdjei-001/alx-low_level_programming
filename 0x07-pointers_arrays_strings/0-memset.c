#include"main.h"
/**
 * _memset - sets memory with a constant byte
 * @s: memory
 * @b: byte
 * @n: max number of bytes to fill
 * Return: returns updated memory address
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
