#include"main.h"
#include<stdio.h>
/**
 * _isupper - Checks for uppercase character
 * @c: Character to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
