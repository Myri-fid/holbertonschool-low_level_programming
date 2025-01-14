#include <stdio.h>
#include "main.h"
#include "function_pointers.h"
/**
 * array_iterator - given as a parameter on each element
 * @array: array
 * @size: size
 * @action: action
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	for (i = 0; i < size; i++)
	action(array[i]);
}
