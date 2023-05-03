#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: Points to the head node of the list
 *
 * Return: the number of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t num_count = 0;

	while (h)
	{
		num_count++;
		h = h->next;
	}
	return (num_count);
}
