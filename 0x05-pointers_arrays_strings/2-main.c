#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Returns 0 always.
 */
int main(void)
{
	char *str;
	int len;

	str = "My firt strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
