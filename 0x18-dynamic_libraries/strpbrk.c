#include"main.h"
/**
 * _strpbrk - Locates the first occurence in the string s of any of the bytes
 * in string accept
 * @s: Pointer to string to be checked
 * @accept: Pointer to the string containing characters to match
 * Return: Pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (0);
}
