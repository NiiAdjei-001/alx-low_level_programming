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
	character = 'a';

	for (i = 0; i < 26; i++)
	{
		putchar(character++);
	}
	putchar('\n');
	return (0);

}
