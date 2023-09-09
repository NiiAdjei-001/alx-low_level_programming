#include "hash_tables.h"
/**
 * key_index - gets the index of a given key
 * @key: key(string value)
 * @size: size of the hash table
 *
 * Return: index value of key
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);

}
