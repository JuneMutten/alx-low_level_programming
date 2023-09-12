#include"main.h"
#include<stdio.h>
/**
 * print_alphabet_x10 - Prints alphabet in lowercase ten times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i;
	char alphabet;

	for (i = 0; i < 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			putchar(alphabet);
		}
		putchar('\n');
	}
}
