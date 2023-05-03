#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: Pointer to pointer of first node in linked list
 *
 * Return: 0, if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *nxt;
	int new_num;

	if (!*head)
	{
		return (0);
	}
	nxt = *head;
	new_num = nxt->n;
	*head = (*head)->next;

	free(nxt);

	return (new_num);
}
