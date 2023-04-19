#include "function_pointers.h"

/**
 * int_index - Entry point
 * Description: searches for an integer in an array using a comparison function
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: pointer to the function used to compare values
 *
 * Return: -1 if no element matches If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, outcome;

	if (!array || !cmp || size <= 0)
	{
		return (-1);
		/* if input invalid */
	}
	for (i = 0; i < size; i++)
	{
		outcome = cmp(array[i]);
		if (outcome != 0)
		{
			return (i);
			/* index of matching element */
		}
	}
	return (-1); /* no matching element found */
}
