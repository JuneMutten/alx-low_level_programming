#include<stdio.h>
/**
 * main - entry point for the main function
 * Description: Function that prints numbers of base 16
 * Return: 0 on success
 */
int main(void)
{
	int number = 0;
	char alphabet = 'a';

	while (number < 10)
	{
		putchar(number + '0');
		number++;
	}

	while (alphabet < 'g')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
