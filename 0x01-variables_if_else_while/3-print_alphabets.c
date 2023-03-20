#include<stdlib.h>
#include<stdio.h>
/**
 * main - Entry code
 *
 * Return: 0 (Succcess)
 */
int main(void)
{
	char charUpperCase;
	char charLowerCase;
	int i;
	/* your code goes there */
	charUpperCase = 'A';
	charLowerCase = 'a';
	for (i = 0; i < 26; i++)
	{
		putchar(charLowerCase++);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(charUpperCase++);
	}
	putchar('\n');
	return (0);
}
