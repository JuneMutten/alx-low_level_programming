#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function creates array of chars,initiliasing it with a char
 *@size: The size of the array
 *@c: Char to be assigned
 *
 * Return: Pointer to array if its successful, NULL if it fails
 *
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)

	return (NULL);

	for (i = 0; i < size; i++)

		str[i] = c;

	return (str);
}
