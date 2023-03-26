#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * Return: Always return 0.
 */
int main(void)
{
	unsigned int n1, n2, temp, i;

	i = 0;
	n1 = 1;
	n2 = 2;
	printf("%u, %u, ", n1, n2);
	while (i < 48)
	{
		temp = n1 + n2;
		n1 = n2;
		n2 = temp;
		printf("%u, ", temp);
		i++;
	}
	printf("\n");
	return (0);
}
