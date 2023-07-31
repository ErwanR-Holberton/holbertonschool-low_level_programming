#include "lists.h"
/**
 * print_list - print a singly linked list
 * @h: points to the start of a list
 *
 * Description: print a singly linked list
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	do {
		if (i != 0)
			h = h->next;
		if (h->str == NULL)
			printf("[%d] (nil)\n", h->len);
		else
			printf("[%d] %s\n", h->len, h->str);
		i++;
	} while (h->next != NULL);
	return (i);
}
