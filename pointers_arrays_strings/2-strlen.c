#include "main.h"
#include <stdio.h>
/**
 *_strlen - returns the length of a string.
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
