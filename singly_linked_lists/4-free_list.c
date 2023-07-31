#include "lists.h"
/**
 * free_list - free the list
 * @head: points to the start of a list
 *
 * Return: NOTHING
 */
void free_list(list_t *head)
{
	list_t *temp_next, *temp_current = head;

	while (temp_current != NULL)
	{
		temp_next = temp_current->next;
		free(temp_current->str);
		free(temp_current);
		temp_current = temp_next;
	}
}
