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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
