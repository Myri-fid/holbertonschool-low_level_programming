#include <stdio.h>

/**
 * main - Prints the number of arguments
 * @argc: The number of arguments
 * @argv: An array of strings
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}