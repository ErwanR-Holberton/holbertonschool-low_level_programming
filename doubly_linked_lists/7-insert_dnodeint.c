#include "lists.h"
/**
 * *insert_dnodeint_at_index - insert
 * @h: points to the start of a list
 * @idx: index to put the new node
 * @n: value of the new node
 *
 * Return: adress of the node or null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	dlistint_t *copyhead = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	while (copyhead != NULL)
	{
		if (i == idx)
		{
			newnode->n = n;
			if (i != 0)
				newnode->prev = copyhead->prev;
			else
				newnode->prev = NULL;
			newnode->next = copyhead;
			if (newnode->next != NULL)
				newnode->next->prev = newnode;
			if (newnode->prev != NULL)
				newnode->prev->next = newnode;
			return (newnode);
		}
		copyhead = copyhead->next;
		i++;
	}
	return (NULL);
}
