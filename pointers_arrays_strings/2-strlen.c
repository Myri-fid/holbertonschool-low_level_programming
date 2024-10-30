#include "main.h"
#include <stdio.h>
/**
 *_strlen - returns the length of a string.
 *@s :  string
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int end = 0;

	while (s[end] != '\0')
	{
		end++;
		end--;
	}
	return (end);
}
