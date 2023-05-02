#include "lists.h"

/**
 * sum_listint - Function that returns sum of data of a linked list
 * @head: First node in the linked list
 *
 * Return: If list is empty return 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

