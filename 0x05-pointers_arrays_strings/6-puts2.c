#include"main.h"
#include<stdio.h>
/**
 * puts2 - Prints every other character of a string
 *@str:String to be printed
 */
void puts2(char *str)
{
	int length = 0, index = 0;

	for (index = 0; str[index] != '\0'; index++)
	{
		length++;
	}
	for (index = 0; index < length; index += 2)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}


