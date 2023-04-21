#include "variadic_functions.h"
/**
 * sum_them_all - sums a list of numbers up.
 * @n: the number of arguments passed
 * @...: arguments passed.
 * Return: sum of the passed arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum, i;

	if (n == 0)
		return (0);
	sum = i = 0;
	va_start(args, n);
	for (; (unsigned int) i < n; i++)
	{
		sum = sum + va_arg(args, int);
	}
	va_end(args);
	return (sum);

}
