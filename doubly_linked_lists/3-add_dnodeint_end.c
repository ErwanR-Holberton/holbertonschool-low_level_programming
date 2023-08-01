#include "lists.h"
/**
 * add_dnodeint_end - add a node to a doubly linked list at the end
 * @head: points to the start of a list
 * @n: int to put in the new node
 *
 * Description: add a node to a doubly linked list at the end
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_end = malloc(sizeof(dlistint_t));
	dlistint_t *copy_head = *head;



	if (head == NULL || new_end == NULL)
	{
		return (0);
	}
	new_end->n = n;
	new_end->prev = NULL;
	new_end->next = NULL;
	if (*head == NULL)
	{
		*head = new_end;
		return (new_end);
	}


	while (copy_head->next != NULL)
	{
		copy_head = copy_head->next;
	}
	copy_head->next = new_end;
	new_end->prev = copy_head;

	return (*head);
}
