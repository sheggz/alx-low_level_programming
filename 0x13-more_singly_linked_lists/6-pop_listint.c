#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t linked
 *		 list
 * @head: double poingterto the node head
 * Return: data at deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	/*
	 * to delete is to remove from the chain
	 * and the chain starts with a head pointer that points to the 1st node
	 * SO WE WANT THE HEAD POINTER TO POINT TO THESECOND NODE
	 */
	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	free(*head);
	return (temp->n);
}
