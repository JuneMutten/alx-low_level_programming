#include <stdio.h>

/**
 * main - Prints the number of arguments passed to it
 * @argc: Argument counter
 * @argv: Argument array
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
