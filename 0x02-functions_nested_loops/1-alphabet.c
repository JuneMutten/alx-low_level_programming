#include "main.h"
#include<stdio.h>
/**
 * main - entry point to the main function
 * Description: Prints the alphabet in lower case followed by new line
 * Return: 0
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
}
