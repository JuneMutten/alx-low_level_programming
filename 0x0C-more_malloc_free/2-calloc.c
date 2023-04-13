#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function allocates memory for an array of nmemb elements
 * @nmemb: Number of elements in the array
 * @size: Size of each element
 *
 * Return: Pointer to the allocated memory
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);
	for (b = 0; b < (nmemb * size); b++)
		ptr[b] = 0;

	return (ptr);
}

