#include"main.h"
/**
 * _strcmp - Compares two strings
 * @s1: Pointer to the first string to be compared
 * @s2: Pointer to the second string to be compared
 * Return: Difference between the two strings
 */
int _strcmp(char *s1, char *s2)
{
	int index;
	int difference;

	for (index = 0; s1[index] != '\0' || s2[index] != '\0'; index++)
	{
		if (s1[index] != s2[index])
		{
			difference = (s1[index] - s2[index]);

			return (difference);
		}
	}
	return (0);
}

