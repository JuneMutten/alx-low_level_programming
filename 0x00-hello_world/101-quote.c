#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main - entry point for function that uses write
 * Return: 1
 */
int main(void)
{
	int s;

	s = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");

	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      s);
	return (1);
}
