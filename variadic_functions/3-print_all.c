#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - Prints
 * @format: format string
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list args;
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		for (i > 0)
			printf(", ");
		if (format[i] == 'c')
			printf("%c", va_arg(args, int));
		else if (format[i] == 'i')
			printf("%d", va_arg(args, int));
		else if (format[i] == 'f')
			printf("%f", va_arg(args, double));
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
