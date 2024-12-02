#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - check the code
 *@h: head
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
	int n_noeud = 0;
	const list_t *current = h;

	if (current == NULL)
		return (0);
	while (current != NULL)
	{
		n_noeud++;
		current = current->next;
	}
	return (n_noeud);
}
