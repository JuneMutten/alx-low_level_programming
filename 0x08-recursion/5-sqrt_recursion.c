#include"main.h"

int find_sqrt(int num, int i);
int _sqrt_recursion(int n);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number to be evaluated
 * Return: Square root
 */
int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - Finds the square root of a number
 * @i: Number assumed to be the square root
 * @num: Number to be evaluated
 * Return: Square root if natural, -1 if none
 */
int find_sqrt(int num, int i)
{
	if (i * i == num)
		return (i);
	if (i * i > num)
		return (-1);

	return (find_sqrt(num, i + 1));
}
