#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - check the code
 *@head: head
 *@index: index
 * Return: Always EXIT_SUCCESS.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;/*parcour liste start 1er nœud*/
	unsigned int i = 0;/*init 0 suivre idx parcours liste.*/

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}
	while (current != NULL && i < index)/*pointeur current n'est pas NULL*/
	{
		current = current->next;
		i++;
	}
		if (current == NULL)
			return (-1);
		if (current->next != NULL)
			current->next->prev = current->prev;
		if (current->prev != NULL)
			current->prev->next = current->next;
		free(current);
		return (1);
}
