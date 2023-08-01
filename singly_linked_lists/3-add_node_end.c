#include "lists.h"
/**
 * add_node_end - add a node to a singly linked list at the end
 * @head: points to the start of a list
 * @str: string to put in the element
 *
 * Description: add a node to a singly linked list at the end
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_end = malloc(sizeof(list_t));
	list_t *copy_head = *head;



	if (head == NULL || new_end == NULL)
		return (0);
		
	new_end->str = strdup(str);
	new_end->len = strlen(str);
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

	return (*head);
}
