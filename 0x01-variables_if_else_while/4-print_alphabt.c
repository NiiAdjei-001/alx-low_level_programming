#include<stdlib.h>
#include<stdio.h>
/**
 * main - Entry code
 *
 * Return: 0 (Succcess)
 */
int main(void)
{
	char charLowerCase;
	char temp;
	int i;
	/* your code goes there */
	charLowerCase = 'a';
	for (i = 0; i < 26; i++)
	{
		temp = charLowerCase + i;
		if ((char)temp == 'q' || (char)temp == 'e')
		{
			;
		}
		else
		{
			putchar(temp);
		}
	}
	putchar('\n');
	return (0);
}
