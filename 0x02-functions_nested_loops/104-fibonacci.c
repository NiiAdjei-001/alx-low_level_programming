#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * Return: Always 0
 */
int main(void)
{
	long double num1, num2, temp;
	short i;

	num1 = 1;
	num2 = 2;
	printf("%.0Lf, %.0Lf, ", num1, num2);
	for (i = 0; i < 96; i++)
	{
		temp = num1 + num2;
		num1 = num2;
		num2 = temp;
		printf("%.0Lf, ", temp);
	}
	printf("\n");
	return (0);
}
