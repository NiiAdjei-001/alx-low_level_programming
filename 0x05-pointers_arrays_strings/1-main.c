#include "main.h"
#include <stdio>

/**
 * main - check the code
 *
 * Return: Returns 0 always.
 */
int main(void)
{
	int a;
	int b;

	a = 98;
	b = 43;
	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return (0);
}
