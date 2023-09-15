#include"main.h"
#include<stdio.h>
/**
 * more_numbers - Prints 10 times the numbers from 0-14 followed by a new line
 */
void more_numbers(void)
{
	int count;
	int number;

	for (count = 0; count <= 9; count++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
				_putchar((number / 10) + '0');
			_putchar((number % 10) + '0');
		}
		_putchar('\n');
	}
}
