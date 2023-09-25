#include"main.h"
#include<stddef.h>
/**
 * _strstr - Locates a substring
 * @haystack: Pointer to the string to be checked
 * @needle: Pointer to the substring to be searched within haystack
 * Return: Pointer to first occurence of needle in haystack or NULL otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			while (haystack[i + j] != '\0' && needle[j] != '\0'
					 && haystack[i + j] == needle[j])
				j++;
			{
				if (needle[j] == '\0')
					return (&haystack[i]);
			}
		}
	}
	return (NULL);
}

