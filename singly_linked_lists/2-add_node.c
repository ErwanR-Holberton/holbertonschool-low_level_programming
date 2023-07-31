#include "lists.h"
/**
 * add_node - add a node to a singly linked list
 * @head: points to the start of a list
 * @str: string to put in the element
 *
 * Description: add a node to a singly linked list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));

	if (head == NULL || new_head == NULL)
		return (0);

	new_head->str = strdup(str);
	new_head->len = strlen(str);
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
