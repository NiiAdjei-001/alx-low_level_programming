#include"hash_tables.h"
/**
 * hash_table_create - create a hash table
 *
 * @size: size of the hash table
 *
 * Return: returns a generated hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	new = malloc((void*) size);
	if (new)
		return (new);
	return (NULL);
}
