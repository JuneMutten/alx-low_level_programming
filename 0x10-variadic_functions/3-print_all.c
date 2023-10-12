#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_all - Prints anything
 * @format: Types of arguments passed to function
 * @...: Variadic arguments
 */
void print_all(const char * const format, ...)
{
	char *s, *separator;
	unsigned int i = 0;
	va_list args;

	va_start(args, format);

	separator = "";

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
		}
	}

	printf("\n");
	va_end(args);
}

