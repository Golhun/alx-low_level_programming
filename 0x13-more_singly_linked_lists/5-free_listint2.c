#include "lists.h"

/**
 * free_listint2
 * Description: Frees a listint_t list and sets the head to NULL
 * @head: a pointer to another pointer of the head node of linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *stat;

	if (!head)
	{
		return;
	}
	while (*head)
	{
		stat = (*head)->next;
		free(*head);
		*head = stat;
	}
	head = NULL;
}
