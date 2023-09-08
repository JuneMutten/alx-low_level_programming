#include<stdio.h>
/**
 * main - entry point for the main function
 * Description: Function that prints single digit numbers
 * Return: 0 on success
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar(number + '0');
		number++;
	}
	putchar('\n');
	return (0);
}
