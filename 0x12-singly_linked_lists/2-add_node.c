#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @head: a double pointer to the head of the linked list
 * @str: string to be initialized
 * Return: a pointer to our new node
 */ 

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *temp;

	while (str[len])
		len++;
	temp = *head;
	*head = malloc(sizeof(list_t));
	if (*head == NULL)
		return (NULL);
	(*head)->next = temp;
	(*head)->str = strdup(str);
	(*head)->len = len;
	 /* this may not work because we */

	/*
	 * THIS IS THE MOST ADOPTED WAY
	 * list_t *temp = malloc(sizeof(list_t));
	 * temp->next = *head;
	 * *head = temp;
	 */

return (*head);

}
