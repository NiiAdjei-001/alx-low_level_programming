#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize dog object;
 * @d: dog object pointer of type struct dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
