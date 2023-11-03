#include "hash_tables.h"

/**
 * key_index - Get index at which a key/value pair should,
 *             be stored in array of a hash table,
 * @key: key to get index of,
 * @size: Size of array of hash table,
 *
 * Return: index of key.
 *
 * Description: Uses djb2 algorithm,
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
