#include<stdio.h>
/**
 * main - entry point to the main function
 * Description: Function that prints lowercase alphabet in reverse
 * Return: 0 on success
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
