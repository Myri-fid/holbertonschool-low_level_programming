#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - check the code
 *@a: diagonal
 *@size: size
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i;
	long int sum1 = 0;
	long int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
	}
	for (i = 0; i < size; i++)
	{
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("%ld, %ld\n", sum1, sum2);
}
