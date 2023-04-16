#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * @argc: arguement count
 * @argv: arguement ventor
 * Return: Always return 0
 */
int main(int argc, char **argv)
{
	printf("%s", argv[argc - 1]);
	exit(EXIT_SUCCESS);
}
