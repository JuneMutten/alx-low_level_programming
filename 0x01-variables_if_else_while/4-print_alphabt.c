#include<stdio.h>
/**
 * main - entry point for the main function
 * Description: Function that prints all the letters except q and e
 * Return: 0 on success
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		if (alphabet != 'q' && alphabet != 'e')
			putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
