#include"main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: first occurrence
 * @accept: string
 *
 * Return: Always 0 on success
 *
 */

char *_strpbrk(char *s, char *accept)

{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
