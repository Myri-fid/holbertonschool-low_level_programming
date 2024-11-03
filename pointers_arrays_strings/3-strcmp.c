#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcmp - Copies the string pointed to by src to dest
 * @s1: destination buffer
 * @s2: string
 * @n: bytes from src
 * Return: A pointer to dest
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 > 0 && *s2 != '\0')
	{
	}
	if (*s1 == *s2)
	{
		*s1 = '\0';
		*s2 = '\0';
	}
	else if (*s1 < *s2)
	{
		s1--;
		s2--;
	}
	else(*s1 > *s2)
	{
		s1++;
		s2++;
	}
}
