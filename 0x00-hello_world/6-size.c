#include <stdio.h>
/**
 * main - function that prints the size of various types on computer
 * Return: 0 on success
 */
int main(void)
{
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of int: %lu byte(s)\n", sizeof(int));
	printf("Size of long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of short int: %lu byte(s)\n", sizeof(short int));
	printf("Size of float: %lu byte(s)\n", sizeof(float));
	printf("Size of double: %lu byte(s)\n", sizeof(double));
	printf("Size of long double: %lu byte(s)\n", sizeof(long double));
	return (0);
}
