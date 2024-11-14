#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *string_nconcat - concatenates two strings
 *@n: nombre
 *@s1: string
 *@s2: string
 *Return: null is passed, treat it as an empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nconcat;
	unsigned int lens1 = 0;
	unsigned int lens2 = 0;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[lens1] != '\0')
		lens1++;
	while (s2[lens2] != '\0')
		lens2++;
	if (n > lens2)
		n = lens2;
	nconcat = malloc(sizeof(char) * (lens1 + n + 1));
	if (nconcat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < lens1; i++)
	{
		nconcat[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		nconcat[lens1 + i] = s2[i];
	}
	nconcat[lens1 + n] = '\0';
	return (nconcat);
}
