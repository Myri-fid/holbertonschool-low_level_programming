#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *@argv: string
 *@argc: arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	(void)argc;

	for (i = 0; argv[0][i] != '\0'; i++)
	{
		putchar(argv[0][i]);
	}
	putchar('\n');
	return (0);
}
