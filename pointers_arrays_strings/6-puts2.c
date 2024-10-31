#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * puts2 - prints every other character of a string
 *@str : string
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	for (; j < i; j++)
	{
	if (j % 2 == 0)
	{
		putchar(str[j]);
	}
	}
	putchar('\n');
}
