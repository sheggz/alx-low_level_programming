#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - a fn to add a node at the begining of d-linked list
 * @head: ptr variable that holds address of the head ptr
 * @n: data to be stored in new node
 * Return: address of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *head_decoy;

	if (!head)
		return (NULL);
	/* for easy understanding, save address of first node to a local var */
	head_decoy = *head;

	/* creat new node */
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	/* what happens if the head of the list is NULL */
	if (!head_decoy)
	{
		*head = new;
		return (*head);
	}
	/* and if the head is not NULL? */

	new->next = head_decoy;
	head_decoy->prev = new;
	*head = new;

	return (new);
}
