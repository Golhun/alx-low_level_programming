#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Entry point
 * Description: Creates and inits an array of characters
 * @size: unsigned int
 * @c: character
 *
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *charLength;

		charLength = malloc(size * sizeof(char));
	if (size == 0 || charLength == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		charLength[i] = c;
	}
	return (charLength);
}
