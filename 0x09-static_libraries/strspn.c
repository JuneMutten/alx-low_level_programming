#include"main.h"
/**
 * _strspn - Calculates the length of intial segment of string pointed to s
 * which consist entirely of characters in string poited to by accept
 * @s: Pointer to the first string
 * @accept: Pointer to the second stringg
 * Return: Number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
	return (count);
}
