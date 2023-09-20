#include"main.h"
/**
 * *string_toupper - Chaanges all lowercase letters of a string to uppercase
 * @str: String to be changed
 * Return: Changed string
 */
char *string_toupper(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
	}
	return (str);
}
