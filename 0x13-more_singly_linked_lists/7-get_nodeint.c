#include "lists.h"

/**
 * get_nodeint_at_index -  a function to get node in a listint_t linked list.
 * @index: the index of the node, starting at 0;
 * @head: this holds a pointer to the first node;
 * Return: pointer to index node if found, NULL if not
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/*
	 * we have to count while we traverse the linked list from start to
	 * finish. on each iteartion we compare with the index.
	 */

	unsigned int count = 0;

	while (head)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}
