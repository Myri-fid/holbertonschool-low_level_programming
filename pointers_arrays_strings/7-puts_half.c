#include <stdio.h>
#include <string.h>
#include "main.h"
/**
*puts_half - Prints half of a string
*@str: string
* Return: Always 0
*/
void puts_half(char *str)
{
	int length_of_the_string = 0;
	int n = (length_of_the_string - 1) / 2;
	int i = 0;

	while (str[length_of_the_string] != '\0')
	{
		length_of_the_string++;
	}
	for (i = n; i < length_of_the_string; i++)
	{
		_putchar(str[i]);
	}
_putchar('\n');
}
