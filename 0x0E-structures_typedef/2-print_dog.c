#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print a dog objects details.
 * @d: dog object
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		if (age)
			printf("Age: %.6s\n", d->age);
		else
			printf("Age: (nil)\n");
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
