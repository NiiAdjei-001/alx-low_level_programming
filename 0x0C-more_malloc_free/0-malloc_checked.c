#include"main.h"
#include<stdlib.h>
/**
 * malloc_checked - Allocates memory
 *
 * @b: size of memory to be allocated
 * Return: a pointer to the allocated memory location.
 *		...
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}

