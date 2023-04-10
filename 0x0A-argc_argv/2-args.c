#include "main.h"
#include<stdio.h>

/**
 * main - Program that prints all arguments that it receives
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 on success
 *
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)

	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
