#include <stdio.h>

/**
 *_strstr - check the code
 *@haystack: string
 *@needle: string
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i] != '\0')
	{
	while (haystack[i + j] == needle[j] && needle[j] != '\0')
	{
		j++;
	}
	if (needle[j] == '\0')
	{
		return (&haystack[i]);
	}
		i++;
		j = 0;
	}
	return (NULL);
}
