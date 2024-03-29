#include"main.h"
/**
 * _strcpy - Copies string pointed to src to the buffer pointed to by dest
 * @src: Source of string
 * @dest: Destination of string
 * Return: Pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
