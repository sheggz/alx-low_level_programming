#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end -  a function that adds a new node at the
 *		  beginning of a listint_t list.
 * @head: a pointer variable that holds the address of another vairable of type
 *	 listint_t * (i.e the head pointer variable)
 * @n: data to be stored in new node
 * Return: pointer to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* at d last node we expect the node pointer to be pointing to null */

	if (*head == NULL) /* condition for last node */
	{
		/* change the pointer at d current last node to point to a */
		/* new node */
		*head = malloc(sizeof(listint_t));
		if (!(*head))
			return (NULL);

		/* since this is the new last node, its pointer variable */
		/* should point to null */
		(*head)->next = NULL;
		(*head)->n = n;

		return (*head); /* note that *head is of type listint_t* */
	}

	/* if not d last node, recursively call d function until we get NULL */
	return (add_nodeint_end(&((*head)->next), n));
}
