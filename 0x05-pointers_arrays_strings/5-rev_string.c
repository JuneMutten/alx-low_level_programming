#include"main.h"
#include<stdio.h>
/**
 * rev_string - Reverses string
 * @s: String to be reversed
 */
void rev_string(char *s)
{
	int length = 0, index, last;
	char temp;

	for (index = 0; s[index] != '\0'; index++)
	{
		length++;
	}
	for (index = 0, last = length - 1; index < last; index++, last--)
	{
		temp = s[index];
		s[index] = s[last];
		s[last] = temp;
	}
}

