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
	dlistint_t *copyhead = *h, *copyprev;
	unsigned int i = 0;

	if (h == NULL || newnode == NULL)
		return (NULL);
	while (copyhead != NULL && i < idx)
	{
		copyprev = copyhead;
		copyhead = copyhead->next;
		i++;
	}
	if (i == idx)
	{
		newnode->n = n;
		newnode->prev = NULL;
		newnode->next = NULL;
		if (copyhead != NULL)
		{
			newnode->prev = copyhead->prev;
			newnode->next = copyhead;
			if (newnode->next != NULL)
				newnode->next->prev = newnode;
			if (newnode->prev != NULL)
				newnode->prev->next = newnode;
		}
		else if (i != 0)
			copyprev->next = newnode;
		if (idx == 0)
			*h = newnode;
		return (newnode);
	}
	return (NULL);
}
