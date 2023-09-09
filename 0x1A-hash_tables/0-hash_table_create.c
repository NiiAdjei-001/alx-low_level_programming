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
	unsigned long int i = 0;
	hash_table_t *new;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);
	new->size = size;
	new->array = malloc(sizeof(hash_node_t *) * size);
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	for (; i < size; i++)
		new->array[i] = NULL;
	return (new);
}
