#include "main.h"

/**
 * flip_bits - Returns number of bits you need to flip to get to another number
 * @n: First number
 * @m: Second number
 * Return: 1 otherwise 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits;

	for (bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bits++;
	}

	return (bits);
}
