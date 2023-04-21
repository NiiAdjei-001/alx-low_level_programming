#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints a sequence of numbers.
 * @separator: demacating string value.
 * @n: number of args
 * @...: args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (separator != NULL && (n > 1))
	{
		i = 0;
		va_start(args, n);
		while (i < (n - 1))
		{
			printf("%d%s", va_arg(args, int), separator);
			i++;
		}
		printf("%d", va_arg(args, int));
		va_end(args);
	}
	printf("\n");
}
