#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * if n is 0 or less, the function should only print \n
 *
 * @n: is the number of times the character '_'
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
