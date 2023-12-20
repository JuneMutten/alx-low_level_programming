#include"main.h"
#include<string.h>
/**
 * _strlen - Function that returns the length of a string
 * @s: String to be measured
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}

