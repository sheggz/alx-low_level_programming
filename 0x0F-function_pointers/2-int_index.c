#include "function_pointers.h"

/**
 * int_index -  a function that searches for an integer in a array
 * @array: pointer to array to be searched
 * @size: size of array to be searched
 * @cmp: pointer to afunction that takes in and returns an integer
 * Return: -1 if no match or size < 0, else i
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; ++i)
	{
		if (cmp(*(array + i)) != 0)
			return (i);
	}
	return (-1); /* match not found */
}
