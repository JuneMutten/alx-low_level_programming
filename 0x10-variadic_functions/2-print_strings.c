#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - Prints strings followed by a new line
 * @separator: String to be printed between the strings
 * @n: Number of strings passed to the function
 * @...: Variadic functions
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list strings;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
