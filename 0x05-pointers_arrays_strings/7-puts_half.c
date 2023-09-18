#include"main.h"
#include<stdio.h>
/**
 * puts_half - Prints half of a string
 * @str: String to be prited
 */
void puts_half(char *str)
{
	int length = 0;
	int index, n;

	for (index = 0; str[index] != '\0'; index++)
	{
		length++;
	}
	if ((length % 2) == 0)
	{
		n = length / 2;
	}
	else
	{
		n = (length - 1) / 2;
	}
	for (index = n; index < length; index++)
		_putchar(str[index]);
}

