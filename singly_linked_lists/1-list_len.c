#include "lists.h"
/**
 * list_len - count the elements of a singly linked list
 * @h: points to the start of a list
 *
 * Description: count the elements of a singly linked list
 * Return: the number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	i++;
	while (h->next != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
