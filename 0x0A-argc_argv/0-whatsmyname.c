#include<stdio.h>
#include "main.h"

/**
 * main - Program that prints its name, followed by a new line
 * @argv: Array of arguments
 * @argc: Number of arguments
 *
 * Return: 0 Always on success
 *
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
