#include "main.h"
/**
 * puts_half -  prints every half of a string, starting from the 0 char
 *
 * @str: String value;
 */
void puts_half(char *str)
{
	int i, len;

	len = 0;
	while (*(str + len) != '\0')
		len++;
	if (len % 2 == 0)
		i = len / 2;
	else
		i = len / 2 + 1;
	for (; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
