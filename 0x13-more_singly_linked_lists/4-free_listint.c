#include "lists.h"

/**
 * free_listint - Frees a linked list
 * @head: First node in the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
