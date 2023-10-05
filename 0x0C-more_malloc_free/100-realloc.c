#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated
 * @old_size: Number of bytes of ptr
 * @new_size: Number of bytes of the new memory block
 * Return: Pointer to the new memory block, NULL otherwise
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new, *copy;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new = malloc(new_size);

		if (new == NULL)
			return (NULL);

		return (new);
	}

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new = malloc(new_size);

	if (new == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		new[i] = ptr[i];

	free(ptr);

	return (new);
}
