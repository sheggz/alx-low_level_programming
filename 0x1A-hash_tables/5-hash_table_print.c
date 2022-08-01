#include "hash_tables.h"
/**
 * hash_table_print - a function to print all elements in a hash table
 * @ht: a pointer with the address of the hash table
 *
 * Description: not that for this ht, eaach slot of the array contains 
 * the head of a linked list that stores the data. ideally each linked list
 * should have only 1 node. but in the case of collisions more nodes are
 * created. ALSO NOTE: with the hash fn, initialization of slots in the array
 * is randomized (not orderly). so slot 50 may have data while 1 doesn't.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp = NULL;
	int comma = 0;

	/* if ht is nuLL DO NOTHING */
	if (!ht)
		return;
	printf("{");
	/* loop through the entire array of the ht */
	while (i < ht->size)
	{
		/* assign another var to use for linked list looping */
		temp = ht->array[i];
		/* if temp is not NULL then a linked list exits at that slot */
		while (temp)
		{
			/* if (i == ht->size - 1 && temp->next == NULL) */
			if (comma == 1)
				printf(", ");
			printf("'%s': '%s'", (char *)temp->key,
					(char *)temp->value);
			comma = 1;
			temp = temp->next;
		}
		i++;
	}
	printf("}\n");
}
