#include<stdlib.h>
#include<stdio.h>
/**
 * main - Entry code
 *
 * Return: 0 (Succcess)
 */
int main(void)
{
	int n1, n11, n12;
	int n2, n21, n22;
	int cond1, cond2, cond3;

	n1 = n11 = n12 = 0;
	n2 = n21 = n22 = 0;
	while (n1 < 100)
	{
		n11 = n1 / 10;
		n12 = n1 % 10;
		while (n2 < 100)
		{
			n21 = n2 / 10;
			n22 = n2 % 10;
			cond1 = (n11 == n21) && (n12 == n22);
			cond2 = ((n11 > n21) || ((n11 == n21) && (n12 > n22)));
			cond3 = !((n11 == 9) && (n12 == 8) && (n21 == 9) && (n22 == 9));
			if (!(cond1 || cond2))
			{
				putchar(n11 + 48);
				putchar(n12 + 48);
				putchar(' ');
				putchar(n21 + 48);
				putchar(n22 + 48);
				if (cond3)
				{
					putchar(',');
					putchar(' ');
				}
			}
			n2++;
		}
		n1++;
		n2 = 0;
	}
	putchar('\n');
	return (0);
}
