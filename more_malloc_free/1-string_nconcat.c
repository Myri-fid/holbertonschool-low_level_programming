#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nconcat;
	unsigned int lens1 = 0;
	unsigned int lens2 = 0;
	unsigned int i;

	if ( n >= lens2)
	{
		s2++;
	}
	if (s1 == NULL || s2 == NULL)
	{
		return ("");
	}
	while (s1[lens1] != '\0' || s2[lens2] != '\0')
	{
		lens1++;
		lens2++;
	}
	nconcat = malloc(sizeof(char) * (lens1 + n + 1));
	if (nconcat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		nconcat[lens1 + i] = s2[i];
	}
	nconcat[lens1 + n] = '\0';
	return (nconcat);
}
