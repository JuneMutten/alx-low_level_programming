#include"main.h"
#include<stdio.h>
/**
 * print_line - Draws a straight line in the terminal
 * @n: Number of times _ shouls be printed
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
