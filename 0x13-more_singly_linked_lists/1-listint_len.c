#include "lists.h"

/**
 * listint_len - Returns the number of elements in list
 * @h: First node of the list
 * Return: Number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
