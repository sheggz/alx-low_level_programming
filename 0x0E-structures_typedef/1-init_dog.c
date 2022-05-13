#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: pointer to the struct object to be initialized
 * @name: pointer to name ATTRIBUTE of the struct
 * @age: attribute
 * @owner: attribute
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
