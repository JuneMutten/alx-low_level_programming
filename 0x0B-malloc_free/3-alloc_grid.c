#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Nested loop that makes a grid
 * @height: Height to be input
 * @width: Width to be input
 *
 * Return: Pointer to 2D array
 *
 */

int **alloc_grid(int height, int width)

{
	int **array;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);
	array = (int **)malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = (int *) malloc(sizeof(int *) * width);
		if (array[i] == NULL)
		{
			free(array);
			for (j = 0; j <= i; j++)
				free(array[j]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
			return (array);

}

