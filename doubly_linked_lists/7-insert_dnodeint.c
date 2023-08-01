#include "lists.h"
/**
 * *insert_dnodeint_at_index - insert
 * @head: points to the start of a list
 * @idx: index to put the new node
 * @n: value of the new node
 *
 * Return: adress of the node or null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t)) ;
	dlistint_t *copyhead = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	while (copyhead != NULL)
	{


		copyhead = copyhead->next;
		i++;
		if (i == idx)
		{
			newnode->n = n;
			newnode->prev = copyhead->prev;
			newnode->next = copyhead;
			newnode->next->prev = newnode;
			newnode->prev->next = newnode;
			return (newnode);
		}
	}
	return (NULL);
}
