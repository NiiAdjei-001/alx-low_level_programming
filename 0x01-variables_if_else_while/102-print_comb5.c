#include<stdlib.h>
#include<stdio.h>
/**
 * main - Entry code
 *
 * Return: 0 (Succcess)
 */
int main(void)
{
	int i;/* first number ten's position*/
	int j;/* first number one's position*/
	int k;/* second number ten's position*/
	int l;/*second number one's position*/
	int condition1;/*condition case for: [ab ab]*/
	int condition2;/*condition case for: [ab ba]*/
	int condition3;/*condition case for: ik > kl */

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 58; k++)
			{
				for (l = 48; l < 58; l++)
				{
					condition1 = (i == k) && (j == l);
					condition2 = (i == l) && (j == k);
					condition3 = ((i > k) || ((i == k) && (j > l)));
					if (!(condition1 || condition2 || condition3))
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
						if (!((i == 57) && (j == 56) && (k == 57) && (l == 57)))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
