#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints a sequence of strings.
 * @separator: demacating string value.
 * @n: number of args
 * @...: args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;


	if (separator != NULL && (n > 1))
	{
		i = 0;
		va_start(args, n);
		while (i < (n - 1))
		{
			str = va_arg(args, char*);
			printf("%s%s", str ? str : "(nil)", separator);
			i++;
		}
		str = va_arg(args, char*);
		printf("%s", str ? str : "(nil)");
		va_end(args);
	}
	printf("\n");
}
