#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Entry point
 * Description: Reallocates memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with malloc
 * @old_size: size of the allocated space for ptr
 * @new_size: new size of the new memory block
 *
 * Return: Pointed to new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newPointer;

	/* If new_size is zero and ptr is not NULL, free memory and return NULL */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		newPointer = malloc(new_size);
		if (newPointer == NULL)
		{
			return (NULL);
		}
		return (newPointer);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	newPointer = malloc(new_size);
	if (newPointer == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		memcpy(newPointer, ptr, old_size);
	}
	else
	{
		memcpy(newPointer, ptr, new_size);
	}
	free(ptr);
	return (newPointer);
}
