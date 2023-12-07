#include "lists.h"

/**
 * dlistint_len - Counts number of elements in dlistint_t list
 * @h: Head of dlistint_t list
 * Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
