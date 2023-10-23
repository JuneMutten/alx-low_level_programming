#include "lists.h"

/**
 * add_nodeint - Add a new node at the beginning of a list
 * @head: First node of the list
 * @n: Element to be added
 * Return: Address of the new element otherwise, NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
