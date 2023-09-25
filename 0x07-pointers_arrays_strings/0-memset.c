#include "main.h"
/**
 * *_memset - Fills memory with a constant byte
 * @s: Pointer to memory area
 * @n: Number of bytes in the memory area pointed to by s
 * @b: Constant byte value used fo fill the memory area
 * Return: Pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
