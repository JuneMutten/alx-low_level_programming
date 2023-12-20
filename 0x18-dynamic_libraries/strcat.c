#include"main.h"
/**
 * *_strcat - Concentrates two strings
 * @dest: Pointer to the destination string
 * @src: Pointer to the string to be appended
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int length = 0;
	int index_dest;
	int index_src;

	for (index_dest = 0; dest[index_dest] != '\0'; index_dest++)
	{
		length++;
	}

		for (index_src = 0; src[index_src] != '\0'; index_src++)
		{
			dest[length] = src[index_src];
			length++;
		}
		dest[length] = '\0';
		return (dest);
}


