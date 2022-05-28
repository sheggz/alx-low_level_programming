#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - a fuunction that frees a listint_t list
 * @head: pointer variable holding address of first node
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	/* we should start freeing from the last node down to the first */
	/* check if head is null i.e last node*/
	if (head)
	{
		/*
		 * if head != null, we will call recursively till we
		 * get to last node
		 */
		free_listint(head->next);
		/*
		 * the moment we hit the last node, we start freeing what is at
		 * that node (and not the next node)
		 */
		free(head);

	}
	/* return; */
}
