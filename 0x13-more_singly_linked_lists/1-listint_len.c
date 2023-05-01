#include "lists.h"

/**
 * listint_len - Function that returns the number of elements in a linked list
 * @h: Linked list of type listint_t to traverse
 *
 * Return: The number of nodes
 */
size_t listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
