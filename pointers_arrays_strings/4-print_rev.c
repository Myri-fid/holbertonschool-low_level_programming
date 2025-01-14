#include "main.h"
#include <unistd.h>
/**
 * print_rev -  prints a string, in reverse,
 *@s : string
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int end = 0;

	while (s[end] != '\0')
	{
		end++;
	}
	end--;
	while (end >= 0)
	{
		write(1, &s[end], 1);
		end--;
	}
	write(1, "\n", 1);
}
