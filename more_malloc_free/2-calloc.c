#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 *@nmemb: elements
 *@size: size of array
 * Return: ptr or null if is fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
/** alloue de la memoire pour un tableau */
	ptr = malloc(nmemb * size);
/* si allocation echou retourne null */
	if (ptr == NULL)
	{
		return (NULL);
	}
/* initialisation de la mémoire a 0 */
	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}
/* pointeur vers memoire allouer */
	return (ptr);
}

