#include "lists.h"

/**
 * free_listint - Function that frees a list
 * @head: List to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
