#include "main.h"
#include <stdio.h>
/**
 * main - Prints the number of argument
 * @argc: The number of arguments
 * @argv: An array of strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
