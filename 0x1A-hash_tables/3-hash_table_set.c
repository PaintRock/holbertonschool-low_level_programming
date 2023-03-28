#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: the key
 * @size:  the size of the hash_table
 * Return: Index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int key_index_hash;

if (key == NULL)
	return (0);

key_index_hash = hash_djb2(key) % size;

return (key_index_hash);
}
