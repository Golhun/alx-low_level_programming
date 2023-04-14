#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _calloc - Entry point
 * Description: Allocates memory for an array, using malloc
 * @nmemb: Integer
 * @size: Integer
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int allocSize;
	void *pointer;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	/* Calculate total size of memory block to allocate */
	allocSize = nmemb * size;
	/* Allocate memory using malloc */
	pointer = malloc(allocSize);
	if (pointer == NULL)
	{
		return (NULL);
	}
	/* Set the allocated memory to zero */
	memset(pointer, 0, allocSize);
	return (pointer);
}
