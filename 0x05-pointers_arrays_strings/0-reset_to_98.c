#include"main.h"
#include<stdio.h>
/**
 * reset_to_98 - Takes pointer to an int and updates the value it points to 98
 *@n: Pointer
 */
void reset_to_98(int *n)
{
	if (n != NULL)
	{
		*n = 98;
	}
}
