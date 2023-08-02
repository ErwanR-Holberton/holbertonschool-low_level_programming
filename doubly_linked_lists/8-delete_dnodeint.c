#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node number index
 * @head: points to the start of a list
 * @index: index to put the new node
 *
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *copyhead = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	while (copyhead != NULL && i < index)
	{
		copyhead = copyhead->next;
		i++;
	}
	if (i == index)
	{
		if (copyhead != NULL)
		{
			if (copyhead->next != NULL)
				copyhead->next->prev = copyhead->prev;
			if (copyhead->prev != NULL)
				copyhead->prev->next = copyhead->next;
		}
		if (index == 0 && copyhead != NULL)
			*head = copyhead->next;
		free(copyhead);
		return (1);
	}
	return (-1);
}
