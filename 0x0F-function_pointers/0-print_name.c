#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Prints a name
 * @name: Name to be printed
 * @f: Pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

