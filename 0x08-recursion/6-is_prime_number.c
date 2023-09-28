#include"main.h"

int is_prime_number(int n);
int is_divisible(int num, int div);

/**
 * is_prime_number - Checks if number is prime
 * @n: Number to be evaluated
 * Return: 1 if number is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}


/**
 * is_divisible - Checks if a number is divisible
 * @num: Number to be evaluated
 * @div: The number to divide num by
 * Return: 1 if num is divisible 0 otherwise
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

