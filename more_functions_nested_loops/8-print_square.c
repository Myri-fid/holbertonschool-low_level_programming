#include "main.h"
/**
*print_square - prints a square in the terminal.
*if size is 0 or less, the function should only print \n
*@size: is the number of times the character '#'
*/
void print_square(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 0; i < size; i++)
	{
		_putchar('#');
	}
	_putchar('\n');
	}
}
