#include "main.h"
/**
 * rev_string- Reverse a string.
 *
 * @s: String variable location
 *
 * Return: Returns nothing;
 */
void rev_string(char *s)
{
	int stringlen, i;
	char c;

	stringlen = 0;
	while (*(s + stringlen) != '\0')
		stringlen++;
	for (i = 0; i < (stringlen / 2); i++)
	{
		c = s[i];
		s[i] = s[(stringlen - 1) - i];
		s[(stringlen - 1) - i] = c;
	}
}
