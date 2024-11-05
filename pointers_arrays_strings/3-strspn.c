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
	unsigned int count = 0;

	while (s == accept)
	{
		if (s != accept)
		{
			return(count);
		}
		s++;
		accept++;
		count++;
	}
	return (count);
}
