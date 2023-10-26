#include "main.h"

/**
 * binary_to_uint - Converts a binary number to unsignsed int
 * @b: String of characters
 * Return: Converted number otherwise 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0, power = 1;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
		i++;

	for (i -= 1; i > 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			result += power;

		power *= 2;
	}

	return (result);
}


