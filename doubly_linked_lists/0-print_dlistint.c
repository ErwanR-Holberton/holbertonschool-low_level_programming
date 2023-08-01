#include "lists.h"
/**
 * print_dlistint - print a doubly linked list
 * @h: points to the start of a list
 *
 * Description: print a doubly linked list
 * Return: the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
