#include <stdio.h>

/**
 *_strpbrk - check the code
 *@s: string
 *@accept: string
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}


