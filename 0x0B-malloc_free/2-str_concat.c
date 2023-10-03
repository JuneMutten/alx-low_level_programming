#include "main.h"
#include <stdlib.h>
char *str_concat(char *s1, char *s2);

/**
 * str_concat - Concentrates two strings
 * @s1: The first string
 * @s2: The second string
 * Return: Pointer to concentrated string, NULL otherwise
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j;
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len1++;

	for (j = 0; s2[j] != '\0'; j++)
		len2++;

	s = malloc((len1 * sizeof(char)) + (len2 * sizeof(char)) + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];

	for (j = 0; j < len2; j++)
		s[len1 + j] = s2[j];

	s[len1 + len2] = '\0';

	return (s);
}
