#include "main.h"
#include <stdio.h>

/**
 *_memcpy - function copies n bytes from memory
 *area src to memory area dest
 *@src: the memory area
 *@n: bytes of the memory
 *@dest: memory area
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[n] = dest[i];
	}
	return (dest);
}
