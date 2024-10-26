#include "main.h"
/**
* time_table - prints the 9 times table, starting with 0
*
* Return: Always 0.
*/
void times_table(void)
{
	int i;

	for (i = '48'; i <= '57'; i++)
	{
		_putchar("'48' x %d = %d\n", i, '57' * i);
	}
	_putchar("\n");
}
