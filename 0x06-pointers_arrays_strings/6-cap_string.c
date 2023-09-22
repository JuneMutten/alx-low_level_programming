#include"main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @str: String to be checked
 * Return: String with all its words capitalized
 */
char *cap_string(char *str)
{
	int index = 0;
	int length = 0;

	for (index = 0; str[index] != '\0'; index++)
	{
		length++;
	}

	for (index = 0; index < length; index++)
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			if (str[index - 1] == ' ' ||
				str[index - 1] == '\t' ||
				str[index - 1] == '\n' ||
				str[index - 1] == ',' ||
				str[index - 1] == '.' ||
				str[index - 1] == ';' ||
				str[index - 1] == '!' ||
				str[index - 1] == '?' ||
				str[index - 1] == '"' ||
				str[index - 1] == '(' ||
				str[index - 1] == ')' ||
				str[index - 1] == '{' ||
				str[index - 1] == '}' ||
				index == 0)
			{
				str[index] -= 32;
			}
		}
	}
	return (str);
}



