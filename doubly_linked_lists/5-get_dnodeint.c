#include "lists.h"
/**
 * *get_dnodeint_at_index - get the n node
 * @head: points to the start of a list
 * @index: number of the node we want
 *
 * Return: address of the node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i != index)
	{
		head = head->next;
		i++;
		if (head == NULL)
			return (head);
	}
	return (head);
}
