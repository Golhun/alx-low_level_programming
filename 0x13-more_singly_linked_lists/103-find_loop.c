#include "lists.h"

/**
 * find_listint_loop - Entry point
 * Description: Finds the loop in a linked list.
 * @head: Pointer to the head of the linked list
 *
 * Return: Address of node where the loop starts, or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *bgn = head;
	listint_t *stp= head;

	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}
	while (stp!= NULL && end->next != NULL)
	{
		bgn = bgn->next;
		stp= end->next->next;
		if (bgn == end)
		{
			bgn = head;
			while (bgn != end)
			{
				bgn = bgn->next;
				stp= end->next;
			}
			return (bgn);
		}
	}
	return (NULL);
}
