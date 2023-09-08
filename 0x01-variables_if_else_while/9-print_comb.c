#include<stdio.h>
/**
 * main - entry point for the main function
 * Description: Function that prints possible combinations for single digits
 * Return: 0 on success
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar(number + '0');
		if (number < 9)
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	putchar('\n');
	return (0);
}
