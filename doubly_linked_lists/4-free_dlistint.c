#include "lists.h"
/**
 * free_dlistint - free the list
 * @head: points to the start of a list
 *
 * Return: NOTHING
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
