#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function thatg frees the space used to store a 'dog_t'
 *	    struct that was created using 'new_dog'- a function that
 *	    uses malloc to create a struct
 * @d: pointer to memory used for the struct
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return (NULL);
	free(d->name);
	free(d->owner);
	free(d);
}
