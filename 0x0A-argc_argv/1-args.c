#include "main.h"
#include<stdio.h>

/**
 * main - Program tha t reads the number of arguments passed to it
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 on succes
 *
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
