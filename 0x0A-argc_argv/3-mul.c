#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * @argc: arguement count
 * @argv: argument vector
 * Return: Always return 0
 */
int main(int argc, char **argv)
{
	int n1, n2, product;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		n1 = atoi(*(argv + 1));
		n2 = atoi(*(argv + 2));
		product = n1 * n2;
		printf("%d\n", product);
	}
	exit(EXIT_SUCCESS);
}
