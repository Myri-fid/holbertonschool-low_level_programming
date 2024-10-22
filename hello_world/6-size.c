#include <stdio.h>

/**
 * main - prints the size of various types on the computer it is compiled
 * and run on.
 * Return: Always 0.
 */

int main(void)
{
	char charType;
	int intType;
	unsigned int longType;
	long doubleType
	float floatType;
	
	printf("Size of a char: %zu bytes\n", sizeof(charType));
	printf("Size of an int: %zu bytes\n", sizeof(intType));
	printf("size of a long int: %zu bytes\n", sizeof(longType));
	printf("size of a long long int: %zu bytes\n", sizeof(doubleType));
	printf("size of a float: %zu bytes\n", sizeof(floatType));

	return (0);
}
