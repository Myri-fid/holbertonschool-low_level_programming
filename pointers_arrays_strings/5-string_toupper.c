#include "main.h"
#include <stdio.h>

/**
*string_toupper - changes all lowercase
*letters of a string to uppercase
*
* Return: Always 0.
*/
char *string_toupper(char *)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = (int)str[i] - 32;
		}
	}
	return (str);
}

