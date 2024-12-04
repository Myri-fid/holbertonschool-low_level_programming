#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - check the code
 *@head: head
 * Return: Always EXIT_SUCCESS.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
