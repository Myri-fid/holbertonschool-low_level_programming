#include "main.h"
#include <stdio.h>
/**
*_islower - cheks if a character is lowercase.
* @c: The character to check (as an integer).
* Return: 1 if c is lowercase, 0 otherwise.
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
		return (0);
}
