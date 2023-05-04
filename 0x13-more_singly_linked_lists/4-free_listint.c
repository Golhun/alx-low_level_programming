#include "lists.h"

/**
 * free_listint - Entry point
 * Description: Frees a listint_t list.
 * @head: Pointer to head node in the linked list
 * 
 Return: pointer to the new node or Null if failed
 */

void free_listint(listint_t *head)
{
	listint_t *stat;

	while (head)
	{
		stat = head;
		head = head->next;
		free(stat);
	}
}
