#include"main.h"
#include<stdio.h>
/**
 * _islower - Checks if a character is lowercase
 * @c: Character to be checked
 * Return: 1 if character is lower 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
