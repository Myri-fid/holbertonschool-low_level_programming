#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncpy - Copies the string pointed to by src to dest
 * @dest: destination buffer
 * @src: string
 * @n: bytes from src
 * Return: A pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (n > 0 && *src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*ptr = '\0';
		ptr++;
		n--;
	}
	return (dest);
}
