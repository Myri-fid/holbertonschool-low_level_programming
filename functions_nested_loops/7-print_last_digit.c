#include "main.h"
/**
*print_last_digit - prints the last digit of a number.
* @n: the number to extract the last digit.
*
* Return the value of the last digit.
*/
int print_last_digit(int)
{
	int number, last_digit;

		_putchar("");
		scanf("%d", &number);
		last_digit = number % 10;
		_putchar("%d %d", number, last_digit);
	return (last_digit);
}
