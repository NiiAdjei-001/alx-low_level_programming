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

	int i;

	/* your code goes there */
	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i <= 102; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);

}
