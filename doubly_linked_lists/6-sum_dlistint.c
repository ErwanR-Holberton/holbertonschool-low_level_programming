#include "lists.h"
/**
 * sum_dlistint - sum all the ns from the nodes
 * @head: points to the start of a list
 *
 * Return: sum of ns
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
