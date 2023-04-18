#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 *
 * Return: Returns a dog object of NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *temp;

	temp = malloc(sizeof(dog_t));
	if (temp == NULL)
		return (NULL);
	temp->name = name;
	temp->age = age;
	temp->owner = owner;
	return (temp);
}
