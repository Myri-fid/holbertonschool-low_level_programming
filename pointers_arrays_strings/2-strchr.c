#include "main.h"
#include <stdio.h>

/**
 * _strchr - check the code
 *@c: character
 *@s:string
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i < c; i++)
	{
	if (c != *s)
		return ('\0');
	}
	return (s);
}
