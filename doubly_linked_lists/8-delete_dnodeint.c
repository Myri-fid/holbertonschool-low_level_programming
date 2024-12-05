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

	while (current != NULL)/*pointeur current n'est pas NULL*/
	{
		if (i == index)
		{
			return (-1);
		}
/*return ptr current pointe vers nœud à l'index spécifié.*/
		current->prev = current->prev;
	}
	return (1);/*si noeud existe pas*/
	free(current->prev);
	free(current);
}

