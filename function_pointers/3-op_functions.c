#include <stdlib.h>
#include <stdio.h>
#include "calc.h"
/**
 * op_add - calcul
 * @a: number
 * @b: number
 * Return: value
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - calcul
 * @a: number
 * @b: number
 * Return: value
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - calcul
 * @a: number
 * @b: number
 * Return: value
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - calcul division
 * @a: number
 * @b: number
 * Return: value
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - calcul modulo
 * @a: number
 * @b: number
 * Return: value
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
