#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - Copies the string pointed to by src to dest
 * @dest: destination buffer
 * @src: string
 *
 * Return: A pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int n;
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (n > 0 && *src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
		n++;
	}
	*ptr = '\0';
	return (dest);
}
