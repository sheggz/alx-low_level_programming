#include <stdlib.h>
#include "dog.h"


int _strlen(char *input);
/**
 * new_dog - a function that creates a new dog.
 *	   * You have to store a copy of name and owner
 * @name: pointer to string that initializes the name of the dog
 * @age: age of new dog
 * @owner: pointer to the owner of the new dog
 * Return: NULL if function fails and pointer to a dog_t struct if otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	dog_t *x; /*
		   * tried creating an actual struct obj, but it wil b local
		   * to this function and we cant return the address of a local
		   * variable since it is destroyed after fn call
		   */

	/* if any of these conditions are not met, we quit */
	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	/* we create a struct somewhere in memory with dynamic malloc */
	x = (dog_t *) malloc(sizeof(dog_t));

	if (x == NULL) /* test for malloc failure */
		return (NULL);

	/*
	 * the name attributE af any "dog_t" is a char pointer and thus should
	 * hold an address. we derefernce x to access this attribute.
	 * NOW!, since attribute 'name' is a pointer, shouldn't 'x' be a
	 * pointer to pointer variable? **JUST THINKING**
	 */

	/*
	 * after dereferncing, we use malloc to create a pointer a memory
	 * location that will store a string
	 */

	(*x).name = (char *) malloc((sizeof(char) * _strlen(name)) + 1);

	if ((*x).name == NULL)
	{
		/*
		 * if this particular malloc fails, we'd have to free the space
		 * reserved to store the entire struct
		 */
		free(x);
		return (NULL);
	}

	for (i = 0; i <= _strlen(name); i++)
		(*x).name[i] = name[i];

	x->owner = (char *) malloc((sizeof(char) * _strlen(owner)) + 1);

	if (x->owner == NULL)
	{
		/*
		 * if this malloc fails, we free the space alredy reseved to
		 * store name and the space reseved to store the entire struct
		 */
		free(x->name);
		free(x);
		return (NULL);
	}

	for (i = 0; i <= _strlen(owner); i++)
		x->owner[i] = owner[i];

	x->age = age;
	return (x);
}


/**
 * _strlen - a function that calculates the length of a string;
 * @input: pointer to string whose length is to be calculated
 * Return: string length
 */

int _strlen(char *input)
{
	int len = 0;

	while (*(input + len) != '\0')
		++len;
	return (len);
}
