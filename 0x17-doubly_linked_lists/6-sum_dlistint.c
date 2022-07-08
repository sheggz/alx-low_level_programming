#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * sum_dlistint - fn to calculate the sum of data in a D-linked list
 * @head: local variable aith address to node 1
 * Return: sum of all data (n) in the nodes
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	/* if index isnt found */
	return (sum);
}

