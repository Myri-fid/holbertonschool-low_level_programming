#include "main.h"
/**
*_isalpha - check if a character is an alphabetic character.
*
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
