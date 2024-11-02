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
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
