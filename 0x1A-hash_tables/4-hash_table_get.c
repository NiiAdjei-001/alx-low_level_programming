#include "hash_tables.h"
/**
 * hash_table_get - gets the value from hash table @ht given key @key
 * @ht: hash table
 * @key: key
 *
 * Return: returns the value of @key or NULL if key doesnt exist
 *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (key == NULL)
		return(NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
