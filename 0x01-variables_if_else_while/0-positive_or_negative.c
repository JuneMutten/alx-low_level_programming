#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point for the main function
 * Description: function that assigns a random number and
 * determines whether its positive or negative
 * Return: 0 on success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
