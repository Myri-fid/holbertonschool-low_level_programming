#include <stdio.h>

/**
 *_strstr - check the code
 *@haystack: string
 *@needle: string
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
/**{
	if ((*haystack == '\0') || (*needle == '\0'))
	{
		return ('\0');
	}
	if (*haystack == *needle)
	{
		haystack++;
		return (haystack);
	}
	return ('\0');
}
*/
{
	while (haystack == needle)
	{
	if (haystack != needle)
	{
		return ('\0');
	}
		haystack++;
		needle++;
	}
	return (needle);
}
