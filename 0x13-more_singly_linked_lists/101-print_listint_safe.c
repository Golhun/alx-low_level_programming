#include "lists.h"

/**
 * print_listint_safe() - Entry point
 * Description: Prints a listint_t linked list.
 * @head: Pointer to the first node of the linked list
 *
 * Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *num_curr, *num;
	size_t num_cnt = 0;

	if (!head || !head->next)
	{
		return (0);
	}
	num_curr = head;
	while (num_curr)
	{
		printf("[%p] %d\n", (void *)num_curr, num_curr->n);
		num_cnt++;
		if (num_curr > num_curr->next)
		{
			num_curr = num_curr->next;
		}
		else
		{
			num = num_curr->next;
			printf("-> [%p] %d\n", (void *)num, num->n);
			break;
		}
	}
	return (num_cnt);
}
