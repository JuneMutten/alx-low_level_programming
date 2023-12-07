#include "lists.h"

/**
 * add_dnodeint - Adds a new nodde at the beggining of dlistint_t list
 * @head: a pointer to the head of the dlistint_t list
 * @n: Interger to be added
 * Return: Null if function fails, otherwise, address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
