#include "main.h"
#include <stdio.h>
#include "main.h"
#include <stdio.h>
/**
*_isupper - cheks if a character is uppercase.
* @c: The character to check (as an integer).
* Return: 1 if c is uppercase, 0 otherwise.
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	return (0);
}
