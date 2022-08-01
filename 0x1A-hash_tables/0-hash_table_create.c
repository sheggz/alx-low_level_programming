#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_create - a function that creates a hashtable
 * @size: the size of the array for the hash table
 * Return: the address of the created hashtable and NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;

	if (size == 0)
	{
		return (NULL);
	}

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);
	hash->size = size;
	/* reserve mem for an array that stores heads of a linked list*/
	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (hash->array == NULL)
	{
		free(hash);
		return (NULL);
	}
	return (hash);
}
