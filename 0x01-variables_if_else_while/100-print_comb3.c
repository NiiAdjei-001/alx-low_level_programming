#include<stdlib.h>
#include<stdio.h>
/**
 * main - Entry code
 *
 * Return: 0 (Succcess)
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i >= j)
			{
				;
			}
			else
			{
				putchar(i);
				putchar(j);
				if ((i + 1) < 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
