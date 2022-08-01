#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves data from a hash table
 * @ht: a pointer to the hash table to be searched
 * @key: the key of data to be retrieved
 * Return: value on success, NULL if not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *key_dupl;
	unsigned long int idx;
	hash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);
	key_dupl = strdup(key);
	/* if inputs are valid then get an index with the key from hash fnc */
	idx = key_index((unsigned char *)key_dupl, ht->size);
	/* get the head of the specific linked list */
	temp = ht->array[idx];
	/* search for key */
	while (temp != NULL)
	{
		if ((strcmp(key_dupl, temp->key) == 0))
			return (temp->value);
		temp = temp->next;
	}
	/* if key isn't found */
	return (NULL);
}
