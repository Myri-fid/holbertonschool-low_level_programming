#include "main.h"
/**
* time_table - prints the 9 times table, starting with 0
*
* Return: Always 0.
*/
void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar("9 x %d = %d\n", i, 9 * i);
	}
	_putchar("\n");
	return (0);
}
