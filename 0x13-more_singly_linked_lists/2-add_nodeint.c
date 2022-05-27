#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint -  a function that adds a new node at the
 *		  beginning of a listint_t list.
 * @head: a pointer variable that holds the address of another vairable of type
 *	 listint_t * (i.e the head pointer variable)
 * @n: data to be stored in new node
 * Return: pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* let's link a temporary pointer to the first node */
	listint_t *temp = *head;

	/* let's free head from d 1st nod and link it to a new node */
	*head =	malloc(sizeof(listint_t));
	if (*head == NULL)
		return (NULL);

	/*let's link the pointer in this new node to the initial 1st node */
	(*head)->next = temp;
	(*head)->n = n;
	return (*head);
}
