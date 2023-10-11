#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: Array of integers
 * @size: Size of the array
 * @cmp: Pointer to the function to be used
 * Return: Index of the first element whixh is not 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size < 1)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i] != 0))
			return (i);
	}
	return (-1);
}


