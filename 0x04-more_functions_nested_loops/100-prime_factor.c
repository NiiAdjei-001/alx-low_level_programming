#include<stdio.h>

/**
 * is_prime - checks if a number is a prime number.
 * @n: integer number.
 *
 * Return: Returns 1 if prime number and 0 if not.
 */
int is_prime(unsigned long n)
{
	unsigned long i;

	if (n == 1 || n == 2)
	{
		return (1);
	}
	for (i = 2; i < n; i++)
	{
		if ((n %  i) == 0)
		{
			return (0);
		}
	}
	return (1);
}

/**
 * next_prime - gets the next prime number following the given number.
 * @n: integer number.
 *
 * Return: Returns the next prime number in the sequence.
 */
unsigned long next_prime(unsigned long n)
{
	while (1)
	{
		n++;
		if (is_prime(n))
			break;
	}
	/**printf("next_prime ==> %ld\n", n);**/
	return (n);
}

/**
 * largest_prime_factor - gets the largest prime number a given number
 * @n: integer number.
 *
 * Return: Returns the largest prime factor of number.
 */
unsigned long largest_prime_factor(unsigned long n)
{
	unsigned long largest;

	largest = 2;
	while (1)
	{
		if (n == 1)
			break;
		if (n % largest == 0)
			n /= largest;
		else
			largest = next_prime(largest);
	}
	return (largest);
}

/**
 * main - Entry point
 *
 * Return: Always 0;
 */
int main(void)
{
	printf("%ld\n", largest_prime_factor(612852475143));
	return (0);
}
