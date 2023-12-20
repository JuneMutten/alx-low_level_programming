#include"main.h"
/**
 * *_strncat - Concentrates two strings with maximum length
 * @dest: Pointer to the destination array
 * @src: Pointer to the string to be appended
 * @n: Maximum number of characters to be appended
 * Return: Pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = 0;
	int index_dest, index_src;

	for (index_dest = 0; dest[index_dest] != '\0'; index_dest++)
	{
		length++;
	}
	for (index_src = 0; src[index_src] && n > 0; index_src++, length++, n--)
	{
		dest[length] = src[index_src];
	}
	return (dest);
}

