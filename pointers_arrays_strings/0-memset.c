#include "main.h"
#include <stdio.h>

/**
 *_memset - fills the first n bytes of the memory area pointed
 * @b: the address of memory to print
 * @s: the size of the memory to print
 * @n: bytes of the memory
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return(s);
}
