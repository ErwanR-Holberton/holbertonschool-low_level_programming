#include "lists.h"
/**
 * dlistint_len - count the elements of a doubly linked list
 * @h: points to the start of a list
 *
 * Description: count the elements of a soubly linked list
 * Return: the number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
