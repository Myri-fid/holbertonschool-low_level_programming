#include "main.h"
#include <stdio.h>
/**
*reset_to_98 - updates the value it points to to 98
*@n : value it points
* Return: Always 0.
*/
void reset_to_98(int *n)
{
	* n = 98;
	printf("%d\n", *n);
}


