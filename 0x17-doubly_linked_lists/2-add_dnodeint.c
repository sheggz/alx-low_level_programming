#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint *new = malloc(sizeof(dlistint_t);
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	while (*head)
	{
		head = &(*head->next);
	}
	*head->next = new;
	new->prev = *head;
}
