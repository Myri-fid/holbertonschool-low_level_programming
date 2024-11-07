#include "main.h"
#include <stdio.h>

/**
 * prime_num - check the code
 *@y: num
 *@n: num
 * Return: Always 0.
 */
int prime_num(int n, int y)
{
	if (y * y > n)
	{
		return (1);
	}
	if (n % y == 0)
	{
		return (0);
	}
	return (prime_num(n, y + 1));
}

/**
 * is_prime_number - check the code
 *@n: number
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
	return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (prime_num(n, 2));
}
