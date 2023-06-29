#include"main.h"
/**
 * _strspn - copies memory are
 * @s: main string to be scanned
 * @accept: string of characters to be matched to main string
 * Return: returns the lenght of characters found in scan
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int len = 0;
	int found_match;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		found_match = 0;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found_match = 1;
				break;
			}
		}
		if (found_match)
			len++;
		else
			break;
	}
	return (len);
}
