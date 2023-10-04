#include"main.h"
/**
 * *_strncpy - Copies a string up to n characters
 * @dest: Pointer to destination character array
 * @src: String to be copied
 * @n: Number of characters to be copied from the source
 * Return: Pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int tracker;

	for (tracker = 0; tracker < n && src[tracker] != '\0'; tracker++)
		dest[tracker] = src[tracker];

	for (; tracker < n; tracker++)
		dest[tracker] = '\0';

	return (dest);
}
