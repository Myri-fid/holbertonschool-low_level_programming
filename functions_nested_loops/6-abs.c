#include "main.h"
#include <stdlib.h>
/**
*_abs - computes the absolute value of an integer.
* @n: The integer
* Return: Always 0.
*/
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}
