#include "main.h"
#include <stdio.h>
/**
 * fibonacci - Print out the first 50  fibonacci numbers
 *
 */
void fibonacci(void)
{
	int n1, n2, temp, i;

	i = 0;
	n1 = 1;
	n2 = 2;
	printf("%d, %d, ", n1, n2);
	while (i < 48)
	{
		temp = n1 + n2;
		n1 = n2;
		n2 = temp;
		printf("%d, ", temp);
		i++;
	}
	printf("\n");
}
