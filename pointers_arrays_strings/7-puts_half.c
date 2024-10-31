#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * void puts_half - check the code
 *
 * Return: Always 0
 */
void puts_half(char *str)
{
	for (int i = 0; i < strlen(str); i += 2)
	{
		putchar(str[i]);
		str[i / 2] = str[i];
	}
}
