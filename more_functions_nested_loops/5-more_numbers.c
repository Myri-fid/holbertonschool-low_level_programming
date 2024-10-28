#include "main.h"
/**
*more_numbers - prints  numbers, from 0 to 14, followed by a new line.
*
* Return: Always 0.
*/
void more_numbers(void)
{
	int i;
	char number;

	for (i = 0; i < 10; i++)
	{
	for (number = 0 ; number <= 14 ; number++)
	{
		_putchar(number);
	}
		_putchar('\n');
}
}
