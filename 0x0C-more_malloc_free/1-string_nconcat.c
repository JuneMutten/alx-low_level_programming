#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concentrates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes of s2 to be concentrated
 * Return: Pointer to new allocated space, NULL otherwise
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len++;

	s = malloc((len + n + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];

	for (i = 0; s2[i] != '\0' && i < n; i++)
		s[len + i] = s2[i];

	s[len + i] = '\0';

	return (s);
}



