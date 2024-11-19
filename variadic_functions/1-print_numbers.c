#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers -  prints numbers
 *@separator: separator
 *@n: numbers
 * Return: Always 0.
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		if (separator != NULL && i > 0)
		{
			printf("%s", separator);
		}
		printf("%d", num);
	}
	printf("\n");
	va_end(args);
}
