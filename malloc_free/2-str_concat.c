#include "main.h"
#include <stdlib.h> 
#include <stdio.h>
/**
 * str_concat - returns a pointer to a newly allocated space in memory
 * @s1: string
 * @s2: string
 * Return: NULL if it fails.
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int i, j;
	char *concat;

	concat = malloc(len1 + len2 + 1);

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (s1 == NULL)
	{
		return ("");
	}
	if (s2 == NULL)
	{
		return ("");
	}
	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < len2; j++, i++)
	{
		concat[i] = s2[j];
	}
	concat[i] = '\0';
	return (concat);
}
