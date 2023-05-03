#include "lists.h"

/**
 * delete_nodeint_at_index - Entry point
 * Description: Deletes the node at index index of a listint_t linked list.
 * @head: Pointer to pointer of first node in linked list
 * @index: Index of the node that should be deleted.
 *
 * Return: 1 success, -1 failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *stat;
	unsigned int x;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	stat = *head;
	for (x = 0; x < (index - 1); x++)
	{
		if (!stat->next)
			return (-1);
		stat = stat->next;
	}
	tmp = stat->next;
	stat->next = tmp->next;
	free(tmp);
	return (1);
}
