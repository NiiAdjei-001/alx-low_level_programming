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
	char *str;
	int stringLength, i;

	i = 0;
	stringLength = 0;
	*str = *s;
	while (*(s + stringLength) != '\0')
	{
		*(str + stringLength) = *(s + stringLength);
		stringLength++;
	}
	while (i < stringLength)
	{
		*(s + i) = *(str + (stringLength - i));
	}
}
