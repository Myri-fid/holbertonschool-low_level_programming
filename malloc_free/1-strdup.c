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
	unsigned int j;
	char *dup;

	dup = (char *)malloc(i + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	if (dup == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
    {
        dup[j] = str[j];
    }
	return (dup);
}
