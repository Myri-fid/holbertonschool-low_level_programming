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
	size_t dest_len = strlen(dest);

	while (*src)
	{
		dest[dest_len] = *src;
		dest[dest_len] = '\0';
	}
	return (dest);
}
