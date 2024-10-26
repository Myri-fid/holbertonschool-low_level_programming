#include "main.h"
/**
* time_table - prints the 9 times table, starting with 0
* @c: The character to print
* Return: Always 0.
*/
void times_table(void)
{
	int i, j;

	times_table();

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
		_putchar("%4d", i * j);
	}
	if (j < 9)
	{
		_putchar(", ");
	}
	}
	_putchar("\n");
	return (0);
}
