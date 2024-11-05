#include "main.h"
#include <stdio.h>

/**
* print_chessboard - check the code
*@a: char
* Return: Always 0.
*/
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	for (i = 0; a[i][7]; i++)
	{
	for (j = 0; j < 8; j++)
	{
		_putchar (a[i][j]);
	}
	_putchar ('\n');
	}

}
