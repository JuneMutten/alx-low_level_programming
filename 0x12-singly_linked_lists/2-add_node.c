#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Beginning of linked list
 * @str: String to be copied
 * Return: Address of new element otherwise, NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t i;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	new->len = i;
	new->next = *head;
	*head = new;

	return (*head);
}


