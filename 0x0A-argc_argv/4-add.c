#include <stdlib.h>
#include <stdio.h>
/**
 * isNumber - Checks if a string is a numerical figure.
 * @str: String value.
 * Return: 1 if string is a number, 0 if not.
 */
short isNumber(char *str)
{
	int c, size;
	
	for(size = 0; str[size] != '\0'; size++)
		continue;
	if (str[0] == '-' && size > 1 )
		c = 1;
	else
		c = 0;
	while (c < size)
	{
		if (!(str[c] >= '0' && str[c] <= '9'))
			return (0);
		c++;
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
