#include"main.h"
#include<stdlib.h>

/**
 * create_array - Creates an array of characters
 * @size: Size of the array to be initialized
 * @c: Specific character to initialize the array with
 * Return: Pointer to the array, NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc((size + 1) * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	a[size] = '\0';

	return (a);
}

