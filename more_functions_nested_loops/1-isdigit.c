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
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
