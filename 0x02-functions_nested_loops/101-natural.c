#include "main.h"
#include <stdio.h>
/**
 * natural - Sums multiples of 3 or 5 from 1 to 1024(excluded)
 *
 */
void natural(void)
{
	int i, sum;

	i = 1;
	sum = 0;

	while (i < 1024)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			sum += i;
		}
		i++;
	}
	printf("%d\n",sum);
}
