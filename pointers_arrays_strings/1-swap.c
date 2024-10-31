#include "main.h"
#include <stdio.h>
/**
*swap_int - swaps the values of two integers
*@a : values
*@b : values
* Return: Always 0.
*/
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = *a;
}
