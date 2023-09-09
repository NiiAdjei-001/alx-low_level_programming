#include "hash_tables.h"
/**
 * hash_table_set - enters a new key/value pair in the hash table @ht
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: 1 if success and 0 otherwise
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (ht == NULL)
		return (0);
	if (strcmp(key, "") == 0)
		return (0);
	index = key_index(key);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
