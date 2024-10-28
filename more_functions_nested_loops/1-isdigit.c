#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
*_isdigit - checks for a digit (0 through 9).
*@c: The character to check (as a digit).
* Return: Always 0.
*/
int _isdigit(int c)
{
	char c = '0';

	if (_isdigit(c) == 0)
	{
		return (1);
	}

	c = 'a';

	if (_isdigit(c) != 0)
	{
		return (0);
	}
}
