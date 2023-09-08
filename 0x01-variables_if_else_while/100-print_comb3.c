#include <stdio.h>
/**
 * main - entry point of main function
 * Description: Print all possible combinations of two digits.
 * Return: 0 on success
 */
int main(void)
{
	int x, y, z;

	x = 0;

	while (x < 100)
	{
		y = x % 10; /* singles digit */
		z = x / 10; /* doubles digit */

		if (z < y)
		{
			putchar(z + '0');
			putchar(y + '0');

			if (x < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}

		x++;
	}
	putchar('\n');

	return (0);
}
