#include <stdio.h>
#include "dog.h"

/**
 * print_dog - a function that prints the attributes of a dog obj type
 * @d: pointer to struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %06f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
