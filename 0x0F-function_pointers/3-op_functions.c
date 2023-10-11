#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two integers
 * @a: First integer
 * @b: Second integer
 * Return: Sum of the integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference between two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The difference between the two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two integers
 * @a: The first integers
 * @b: The second integer
 * Return: The product of two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns result of dividing a by b
 * @a: The first integer
 * @b: The second integer
 * Return: Result of dividing a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns remainder of dividing a by b
 * @a: The first integer
 * @b: The second integer
 * Return: Remainder of dividing a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}


