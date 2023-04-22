#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * Return: Always 0
 */
int main(void)
{
	unsigned long int num1, num2, temp;
	short i;

	num1 = 1;
	num2 = 2;
	printf("%lu, %lu, ", num1, num2);
	for (i = 0; i < 96; i++)
	{
		temp = num2;
		num2 = num2 + num1;
		num1 = num2;
		printf("%lu, ", temp);
	}
	printf("\n");
	return (0);
}
