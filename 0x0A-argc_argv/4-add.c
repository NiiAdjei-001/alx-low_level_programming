#include <stdlib.h>
#include <stdio.h>
/**
 * isNumber - Checks if a string is a numerical figure.
 * @str: String value.
 * Return: 1 if string is a number, 0 if not.
 */
short isNumber(char *str)
{
	int i;

	for (i = 0; i < (int)sizeof(str); i++)
	{
		if (str[0] == '-' || (str[0] >= '0' && str[0] <= '9'))
			continue;
		else if (str[i] >= '0' && str[i] <= '9')
			continue;
		else
			return (0);
	}
	return (1);
}

/**
 * main - entry point
 * @argc: arguement count
 * @argv: argument vector
 * Return: Always return 0
 */
int main(int argc, char **argv)
{
	int i, sum;

	sum = 0;
	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isNumber(argv[i]))
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				exit(EXIT_SUCCESS);
			}
		}
		printf("%d\n", sum);
	}
	exit(EXIT_SUCCESS);
}
