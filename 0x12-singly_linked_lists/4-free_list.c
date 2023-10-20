#include "lists.h"

/**
 * free_list - Frees list_t list
 * @head: Begging of the list
 * Return: 0 on success
 */

void free_list(list_t *head)
{
	list_t *current;

	if (head == NULL)
		return;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
