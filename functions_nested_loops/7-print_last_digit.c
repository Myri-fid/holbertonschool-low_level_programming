#include "main.h"
/**
* print_last_digit - prints the last digit of a number.
* @r: the number to extract the last digit.
*
* Return the value of the last digit.
*/
int print_last_digit(int)
{
	int r;
	int last_digit = r % 10;

	if (last_digit < 0)
	{
		_putchar('0' + last_digit);
	return (last_digit);
}
