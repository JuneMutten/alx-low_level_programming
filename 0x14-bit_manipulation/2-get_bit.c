#include "main.h"

/**
 * get_bit - Returns value of a bit ata given index
 * @n: Integer input
 * @index: Index of the integer
 * Return: Value of bit otherwise -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}
