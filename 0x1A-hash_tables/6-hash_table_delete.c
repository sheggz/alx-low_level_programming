#include "hash_tables.h"

/**
 *
 *
 */
void free_list(hash_node_t *table);

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		if (ht->array[i])
			free_list(ht->array[i]);
		i++;
	}
	free(ht);
}

void free_list(hash_node_t *table)
{
	if(table->next != NULL)
		free_list(table->next);
	free(table->key);
	free(table->value);
	free(table);
	return;		
}
