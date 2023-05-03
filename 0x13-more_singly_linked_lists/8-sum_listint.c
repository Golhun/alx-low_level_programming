#include "lists.h"

/**
 * sum_listint - Entry point
 * Description: returns the sum of all the data (n) of a listint_t linked list
 * @head: Pointer to the first node of the linked list
 *
 * Return: 0, if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum_calc = 0;
    listint_t *stat = head;

	while (stat)
	{
		sum_calc += stat->n;
		stat = stat->next;
	}
	return (sum_calc);
}
