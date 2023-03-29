#include "main.h"

/**
 * swap_int - Swaps the content of integer pointers a and b.
 * @a: Integer pointer a;
 * @b: Integer pointer b;
 * Return: Returns nothing
 */
void swap_int(int *a, int *b)
{
	int valA;
	int valB;

	valA = *a;
	valB = *b;
	*a = valB;
	*b = valA;
}
