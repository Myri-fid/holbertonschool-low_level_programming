#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strcpy - copies the string pointed to by src
 *@dest: buffer pointed
 *@src: string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*dest = *src;
		for ( ; i < n; i++)
		{
			*dest = '\0';
		}
	}
	return (dest);
}
