#include"main.h"
#include<stddef.h>
/**
 * *_strchr - Locates a character in a string
 * @s: Pointer to string to be checked
 * @c: Character to be located
 * Return: Pointer to the first occurrence of c or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
		length++;
	for (i = 0; i < length; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
