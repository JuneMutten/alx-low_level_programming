#include "lists.h"

/**
 * add_dnodeint_end - Adds new node at the end of a list
 * @head: Pointer to the head of the list
 * @n: Integer to be added
 * Return: NULL if it fails, otherwise address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *end;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;

	if (*head == NULL)
	{
		tmp->prev = NULL;
		*head = tmp;
		return (tmp);
	}

	end = *head;
	while (end->next != NULL)
		end = end->next;
	end->next = tmp;
	tmp->prev = end;

	return (tmp);
}
