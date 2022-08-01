#include "hash_tables.h"

void free_list(hash_node_t *table);

/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: a pointer to the hash table to be deleted
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	if (ht == NULL || ht->array == NULL)
		return;

	while (i < ht->size)
	{
		if (ht->array[i])
			free_list(ht->array[i]);
		i++;
	}
	/* when we're done freeing the lists, we free the array */
	free(ht->array);
	/* free the overall hashtable */
	free(ht);
}

/**
 * free_list - a recursive function to delete the nodes of a linked list
 * @head: the head of the linked list to be freed
 */

void free_list(hash_node_t *head)
{
	if (head->next != NULL)
		free_list(head->next);
	/* because we used strdup() to store the key and value, we free */
	free(head->key);
	free(head->value);
	/* we free the node itsef */
	free(head);
}
