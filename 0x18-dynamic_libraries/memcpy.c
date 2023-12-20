#include"main.h"
/**
 * *_memcpy - Copies memory area
 * @dest: Memory area of destination
 * @src: Memory area of source
 * @n: Number of bytes to be copied
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
