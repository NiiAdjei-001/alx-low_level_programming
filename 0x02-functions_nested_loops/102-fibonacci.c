#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * Return: Always return 0.
 */
int main(void)
{
	int i;
	long n1, n2, temp;

	i = 0;
	n1 = 1;
	n2 = 2;
	printf("%ld, %ld, ", n1, n2);
	while (i < 48)
	{
		temp = n1 + n2;
		n1 = n2;
		n2 = temp;
		if (i == 47)
		{
			printf("%ld", temp);
		}
		else
		{
			printf("%ld, ", temp);
		}
		i++;
	}
	printf("\n");
	return (0);
}
