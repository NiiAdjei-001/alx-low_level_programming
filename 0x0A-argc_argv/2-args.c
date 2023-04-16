#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * @argc: arguement count
 * Return: Always return 0
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	exit(EXIT_SUCCESS);
}
