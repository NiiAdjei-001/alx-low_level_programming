#include <stdlib.h>
#include <stdio.h>
/**
 * getCoins - get the number of coins to be given as change.
 * @c: cents
 * Return: the number of coins to give back.
 */
int getCoins(int c)
{
	int count, index;
	int coins[] = {25, 10, 5, 2, 1};

	count = index = 0;
	while (index < 5)
	{
		if (c >= coins[index])
		{
			count++;
			c -= coins[index];
		}
		else
			index++;
	}
	return (count);
}
/**
 * main - entry point
 * @argc: arguement count
 * @argv: argument vector
 * Return: Always return 0
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n = atoi(*(argv + 1));
		if (n < 0)
			printf("0\n");
		else
		{
			printf("%d\n", getCoins(n));
		}
	}
	exit(EXIT_SUCCESS);
}
