#include"main.h"
#include<stdio.h>
/**
 * print_diagsums - Prints sum of two diagonals of square matrix of integers
 * @a: Matrix of integers
 * @size: Size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int pri_dia_sum = 0;
	int sec_dia_sum = 0;

	for (i = 0; i < size; i++)
	{
		pri_dia_sum += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sec_dia_sum += a[i];
		a -= size;
	}
	printf("%d, %d\n", pri_dia_sum, sec_dia_sum);
}
