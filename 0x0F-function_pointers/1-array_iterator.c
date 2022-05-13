#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a parameter on
 *		    each element of an array.
 * @array: pointer to array to be operated upon
 * @size: size of the supplied array
 * @action: pointer to a function that takes an int and returns nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; ++i)
		(*action)(array[i]); /*
				      *	derefernce and access the code in
				      *	supplied function this will also
				      *	work: action(array[i]
				      */
}
