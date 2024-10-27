#include "main.h"
#include <stdlib.h>
/**
*_abs - computes the absolute value of an integer.
* @n: The integer
* Return: Always 0.
*/
int _abs(int n)
{
	int res;

	if (n < 0)
	{
		res = -n;
	}
	else
	{
		res = n;
	}
	return (res);
}
