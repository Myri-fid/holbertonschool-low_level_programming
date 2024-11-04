#include <stdio.h>

/**
 *_strpbrk - check the code
 *@s: string
 *@accept: string
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	if ((*s == '\0') || (*accept == '\0'))
	{
		return ('\0');
	}
	if (*s == *accept)
	{
		s++;
		return (s);
	}
	return ('\0');
}


