#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Dog object or data type
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 */
struct dog
{
	char *name;
	int age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;
#endif
