#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns pointer to a new string which is a duplicate of string str
 * @str: String to be duplicated
 * Return: Pointer to duplicated string, otherwise NULL
 */

char *_strdup(char *str)
{
	char *s;
	int i, j;
	int length = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		length++;

	s = malloc(sizeof(char) * (length + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0, j = 0; str[i] != '\0' && s[j] != '\0'; i++, j++)
		s[j] = str[i];

	return (s);
}



