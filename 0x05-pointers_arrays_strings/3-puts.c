#include"main.h"
#include<stdio.h>
/**
 * _puts - Prints a string followed by new line to stdout
 *@str: String to be printed
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}

