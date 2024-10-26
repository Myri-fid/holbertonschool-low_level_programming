#include "main.h"
/**
* time_table - prints the 9 times table, starting with 0
* @c: The character to print
*/
void times_table(void)
{
	int i, j;
	int product = i * j;

	for (int i = 0; i <= 9; i++)
	{
	for (int j = 0; j <= 9; j++)
	{
	if (j != 0)
	{
		_putchar(',');
		_putchar(' ');
	}
	if (product < 10)
	{
		_putchar(' ');
	}
	if (product >= 10)
	{
		_putchar((product / 10) + '0');
	}
		_putchar((product % 10) + '0');
	}
	_putchar('\n');
	}
}
