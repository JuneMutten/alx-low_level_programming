#include"main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: String to be checked
 * Return: 1 if s is a palindrome 0 otherwise
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index));
}

/**
 * check_palindrome - Checks if string is a palindrome
 * @s: String to be checked
 * @index: Index of the string
 * @len: length of s
 * Return: 1 if palindrome and 0 if not
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);
}

/**
 * find_strlen - Returns length of a string
 * @s: String to be checked
 * Return: length of a string
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}

	return (len);
}
