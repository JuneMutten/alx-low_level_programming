#include "main.h"

/**
 * set_bit - Sets value of a bit at a given index
 * @n: Pointer to unsigned integer
 * @index: Index of the bit
 * Return: 1 otherwise 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
