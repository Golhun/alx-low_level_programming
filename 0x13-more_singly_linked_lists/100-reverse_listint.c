#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: Pointer to pointer of first node in the linked list
 *
 * Return: A pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *strt = NULL;
	listint_t *blw;

	if (!head || !*head)
	{
		return (NULL);
	}
	while (*head)
	{
		blw = (*head)->next;
		(*head)->next = strt;
		strt = *head;
		*head = blw;
	}
	*head = strt;

	return (*head);
}
