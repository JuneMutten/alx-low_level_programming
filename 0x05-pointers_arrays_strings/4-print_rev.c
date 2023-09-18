#include"main.h"
#include<stdio.h>
/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: String to be reversed
 */
void print_rev(char *s)
{
	int length = 0, index;

	for (index = 0; s[index] != '\0'; index++)
	{
		length++;
	}
	for (index = length - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}
}
