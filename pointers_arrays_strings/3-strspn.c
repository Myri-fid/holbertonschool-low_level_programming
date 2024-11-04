#include "main.h"
#include <stdio.h>

/**
*_strspn - check the code
*@s: string
*@accept: string
*Return: number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	if ((s == NULL) || (accept == NULL))
	{
		return (len);
	}
	while (*s && accept && *s++)
	{
		len++;
	}
	return (len);
}
