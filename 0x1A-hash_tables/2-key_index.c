#include "hash_tables.h"

/**
 * key_index - a function to hash a key and return an index
 * @key: the key to be hashed
 * @size: the size of the array of the hashtable
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int gen_hash;

	if ((key == NULL) || (size == 0))
		return (-1);
	gen_hash = hash_djb2(key);
	return (gen_hash % size);
}
