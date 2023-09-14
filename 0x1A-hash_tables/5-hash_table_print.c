#include"hash_tables.h"
/**
 * hash_table_print - prints the content of a hash table @ht
 * @ht - hash table
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				printf("'%s': '%s' ", current->key, current->value);
				current = current->next;
			}
		}
		printf("}\n");
	}
}
