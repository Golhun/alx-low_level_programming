#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Pointer to pointer of first node in the linked list
 *
 * Return: The size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *num_strt = *h, *node;
	size_t num;
	num = 0;
	if (!h || !*h)
	{
		return (num);
	}
	while (num_strt)
	{
		node = num_strt;
		num_strt = num_strt->next;
		if (num_strt <= num_strt->next)
		{
			*h = NULL;
			num++;
			break;
		}
		node = num_strt->next;
		num_strt->next = NULL;
		free(num_strt);
		num_strt = node;
		num++;
	}
	*h = NULL;
	return (num);
