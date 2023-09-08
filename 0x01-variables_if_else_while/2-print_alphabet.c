#include <stdio.h>
/**
 * main - entry point for the main function
 * Description - function that prints the alphabet in lower case
 * Return: 0 on success
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
