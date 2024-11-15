#include <stdio.h>
#include "dog.h"

/**
 * print_dog - check the code
 *@d: initialise
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)");
}
