#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns sum of all its parameters
 * @n: Number of parameters
 * @...: Arguments
 * Return: Sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list nums;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		int number = va_arg(nums, int);

		sum += number;
	}
	va_end(nums);

	return (sum);
}





