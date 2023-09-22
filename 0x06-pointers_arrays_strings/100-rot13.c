#include"main.h"
/**
 * rot13 - Encodes a string using rot13
 * @s: String to be encoded
 * Return: Encoded string
 */
char *rot13(char *s)
{
	int i;
	char rot13key_uc[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char rot13key_lc[] = "nopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123))
		{
			s[i] = (s[i] - 65 > 25) ?
				rot13key_lc[s[i] - 97] : rot13key_uc[s[i] - 65];
		}
	}
	return (s);
}
