#include "main.h"
#include <stdio.h>

/**
 *find_sqrt - check the code
 *@n: nombre
 *@y: square
 * Return: Always 0.
 */
int find_sqrt(int n, int y)
{
	if (y * y == n)
	{
		return (y);
	}
	if (y * y > n)
	{
		return (-1);
	}
	return (find_sqrt(n, y + 1));
}
/**
 *_sqrt_recursion - check the code
 *@n: nombre
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_sqrt(n, 0));
}


