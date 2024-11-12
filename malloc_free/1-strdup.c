#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer to the duplicated, or NULL if it fails.
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	char *dup;

	str = (char *)malloc(strlen(str) + 1);
	dup = (char *)malloc(i + 1);

	if (str == 0)
	{
		return (NULL);
	}
	if (dup == 0)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		str[i] = dup[i];
	}
	return (dup);
}
