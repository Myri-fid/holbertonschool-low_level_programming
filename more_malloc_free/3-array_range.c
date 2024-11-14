#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - allocates memory for an array
 *@min: elements
 *@max: size of array
 * Return: ptr or null if is fails.
 */
int *array_range(int min, int max)
{
	int i;
	int size;
	int *array_range;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	/** alloue de la memoire pour un tableau */
	array_range = malloc(size * sizeof(int));
	/* si allocation echou retourne null */
	if (array_range == NULL)
	{
		return (NULL);
	}
	/* initialisation de la mémoire a 0 */
	for (i = 0; i < size; i++)
	{
		array_range[i] = min + i;
	}
	/* pointeur vers memoire allouer */
	return (array_range);
}
