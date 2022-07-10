#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - a funcn to insert a node in a doubly linked list
 *			      at a given index
 * @idx: index of the node to be inserted
 * @h: local variable to store the address of head
 * @n: data to be stored in new node
 * Return: address of new node or NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head_decoy = *h, *temp, *new;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	if ((head_decoy == NULL || head_decoy != NULL) && idx == 0)
	{
		*h = add_dnodeint(h, n);
		if (*h == NULL)
			return (NULL);
		else
			return (*h);
	}
	else if (head_decoy == NULL && idx != 0)
		return (NULL);
	else
	{
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		new->prev = NULL;
		new->next = NULL;
		new->n = n;

		while (i < idx - 1)
		{
			h = &((*h)->next);
			head_decoy = head_decoy->next;
			i++;
		}

		temp = head_decoy->next;
		head_decoy->next = new;
		temp->prev = new;
		new->next = temp;
		new->prev = head_decoy;

		return (new);

	}
	/* IF *h == NULL && idx != 0 */
	return (NULL);
}
