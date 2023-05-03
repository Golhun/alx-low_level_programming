#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the first node in the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num_count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_count++;
	}
	return (num_count);
}
