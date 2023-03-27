#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * Return: Always return 0.
 */
int main(void)
{
	long n1, n2, temp, sum;

	n1 = 1;
	n2 = 2;
	sum = n2;
	while (n2 < 4000000)
	{
		temp = n1 + n2;
		n1 = n2;
		n2 = temp;
		if ((n2 % 2) == 0)
		{
			sum += n2;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
