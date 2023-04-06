#include "main.h"

/**
 * _strncmp - compares two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: Returns 0 if s1 is equal to s2, 1 if s1 is greater than s2,
 *	-1 if s1 is less than s2..
 */
int _strcmp(char *s1, char *s2)
{

	int i;

	for (i = 0; (s1[i] != '\0') || (s2[i] != '\0'); i++)
	{
		if (s1[i] == s2[i])
		{
			continue;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (s1[i] - s2[i]);
}

