#include"main.h"

/**
 * print_chessboard - A funtion that prits the chessboard
 * @a: Array
 *
 *Return: Always 0 on success
 *
 */

void print_chessboard(char (*a)[8])

{
	int i;
	int j;

	for (i = 0; j < 8; j++)
	{
		for (i = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
