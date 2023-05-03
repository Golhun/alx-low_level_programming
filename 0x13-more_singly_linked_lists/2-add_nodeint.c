#include "lists.h"

/**
 * add_nodeint - Entry point
 * Description: Add new node at the start of a listint_t
 * @head: Pointer to a pointer to the head node in the list
 * @n: New nod
 *
 * Return: address of new element, or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	new = malloc(sizeof(listint_t));
    /*if not new return null*/
	if (!new)
	{
		return (NULL);
	}
	new->n = n;	
	new->next = *head;
	*head = new;
	return (new);
}
