#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - Entry code
 *
 * Return: 0 (Succcess)
 */
int main(void)
{

	char character;
	int i;

	/* your code goes there */
	character = 'z';

	for (i = 26; i > 0; i--)
	{
		putchar(character--);
	}
	putchar('\n');
	return (0);

}
