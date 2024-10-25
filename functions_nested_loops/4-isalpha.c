#include "main.h"
/**
*_isalpha - check if is an alphabetic character.
* @c: The character to check (as an integer).
* Return: 1 if c is lowercase, 0 otherwise.
*/
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
