#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * @argc: arguement count
 * @argv: argument count
 * Return: Always return 0
 */
int main(int argc, char **argv)
{
	if (argv)
	{
		printf("%d\n", (argc - 1));
	}
	exit(EXIT_SUCCESS);
}
