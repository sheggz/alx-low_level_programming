#include "main.h"
#include <stdlib.h>
/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with a call to
 *	 malloc: malloc(old_size)
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: a pointer to new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	int *new_mem, *old_mem; /*
		       * i used void* before but since we cant dereference
		       * a void pointer or perform pointer arithmetic with
		       * void pointers, i have to specify a type which i'd
		       * work with within this function
		       */

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_mem = (int *)malloc(new_size);
		if (new_mem == NULL)
			return (NULL);
		return (new_mem);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size < old_size)
		old_size = new_size;

	new_mem = (int *)malloc(new_size);
	old_mem = (int *)ptr;
	if (new_mem == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
		*(new_mem + i) = *(old_mem + i);
	return (new_mem);
}
