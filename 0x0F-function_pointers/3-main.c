#include "3-calc.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always return 0
 */
int main(argc, char **argv)
{
	char *operator; 
	int num1, num2, result;
	
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);
	if (get_op_function(operator) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result

	// Continue coding here
	exit(EXIT_SUCCESS);
}
