#include "main.h"
/**
*print_last_digit - prints the last digit of a number.
* @n: the number to extract the last digit.
*
* Return the value of the last digit.
*/
int print_last_digit(int n)
{
	int print_last_digit = n % 10;

	if (print_last_digit < 0)
	{
		print_last_digit = -print_last_digit;
	}
	_putchar('0' + print_last_digit);
	return (print_last_digit);
}
