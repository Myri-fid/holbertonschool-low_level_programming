#include "main.h"
/**
*more_numbers - prints the numbers 10 times, from 0 to 14
*followed by a new line
*
*Return: Always 0.
*/
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
	for (j = 0; j <= 14; i++)
	{
		_putchar(j + '0');
	}
	}
	_putchar('\n');
}
