#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - a fuunction that frees a listint_t list
 * @head: pointer variable holding address of first node
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	/*
	 * ideally my approach is that we should start freeing from the last
	 * node down to the first using recursion BUT! since we're to set the
	 * very first pointer (HEAD) to NULL, using recursion, how do we
	 * know we ae back to the first node? so we can set ONLY DAT FIRST NODE
	 * to NULL? because
	 * we cant do this in the function itself since it will be calling
	 * itself.
	 *
	 * 2 APPROACHES
	 * 1) we can use another function solely for the recursive freeing purpose
	 * and set head to null in the calling function after the recursive fn
	 * is done.
	 *
	 * 2) we can use a WHILE LOOP for the freeing but this time it will be
	 * from front to begining to end. we will do this by storing the addres
	 * of the next node in a temporary pointer variable and we will free d
	 * current node
	 */
	listint_t *temp;

	/* check if head is not null i.e not last node*/
	if (*head)
	{
		while (*head) /* while head is not NULL) */
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
		}
		*head = NULL;
	}
	/* return; */
}
