#include"main.h"
/**
 * factorial - Returns the factorial of a given number
 * @n: Number whose factorial is to be returned
 * Return: Factorial of that number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
