#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - release allocated memory space.
 * @d: a pointer of type struct dog
 *
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		/* if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d); */
		free(d);
	}
}
