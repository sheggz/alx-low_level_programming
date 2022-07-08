#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - a fn that adds a node to the end of a doubly linked list
 * @head: ptr variable that stores address of the head of linked list
 * @n: data to be stored in new node
 * Return: address of new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while ((*head)->next)
	{
		head = &((*head)->next);
	}
	(*head)->next = new;
	new->prev = *head;
	return (new);
}
