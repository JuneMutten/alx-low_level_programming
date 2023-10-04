#include <stdio.h>

/**
 * main - Prints its name followed by a new line
 * @argc: Argument counter
 * @argv: Argument array
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
