#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Entry point
 * Description: function that allocates memory using malloc
 * @b: integer
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *pointer = malloc(b);

	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
