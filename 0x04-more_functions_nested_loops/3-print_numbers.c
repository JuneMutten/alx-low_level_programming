#include"main.h"
#include<stdio.h>
/**
 * print_numbers - Prints numbers from 0 to 9 followed by new line
 */
void print_numbers(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}

