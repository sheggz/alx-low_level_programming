#include <string.h>
#include "hash_tables.h"


/**
 * hash_table_set - a function that stores data in a hash table
 * @ht: a pointer to the hash table
 * @key: the key of data to be saved
 * @value: the value of data to be saved
 * Return: 0 on failure, 1 on success
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	char *key_dupl, *val_dupl;
	hash_node_t *temp, *new_node, *head;

	if (ht == NULL || ht->size == 0 || ht->array == NULL || key == NULL
		       	|| strcmp(key, "") == 0)
		return (0);
	/* duplicate the key and value since they cant be used */
	/* that way due to the "const" */
	key_dupl = strdup(key);
	val_dupl = strdup(value);
	/* handle possible error */
	if (key_dupl == NULL || val_dupl == NULL)
		return (0);
	/* hash the key */
	idx = key_index((unsigned char *)key_dupl, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->key = key_dupl;
	new_node->value = val_dupl;
	new_node->next = NULL;
	/* check hashtable FOR COLLISIONS */
	head = ht->array[idx];
	if (head != NULL)
	{
		temp = head->next;
		new_node->next = temp;
	}
	ht->array[idx] = new_node;
	return (1);
}
