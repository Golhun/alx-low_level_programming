#include "main.h"
#include <stdlib.h>

/**
 * array_range - Entry point
 * Description: Creates an array of integers
 * @min: Integer
 * @max: Integer
 * Return: array
 */

int *array_range(int min, int max)
{
	int *array, size, i;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	array = malloc(size * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
