#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Successs)
 */
int main(void)
{
	int i = 0;

	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	while (i < (int)sizeof(quote))
	{
		putchar(quote[i]);
		i++;
	}
	putchar('\n');
	return (1);
}
