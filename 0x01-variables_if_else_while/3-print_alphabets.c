#include<stdio.h>
/**
 * main - entry point for the main function
 * Description: Function that prints the alphabet in lower and upper case
 * Return: 0 on success
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		putchar(alphabet);
	}

	for (alphabet = 'A' ; alphabet <= 'Z' ; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
