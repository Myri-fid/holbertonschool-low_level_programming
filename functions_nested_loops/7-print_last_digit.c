#include "main.h"
/**
* print_last_digit - prints the last digit of a number.
* @n: the number to extract the last digit.
* Return the value of the last digit
*/
int print_last_digit(int)
{
	int n, last_digit;

		scanf("%d", &n);
		last_digit = n % 10;
		_putchar("%d", last_digit);

	return (last_digit);
}
