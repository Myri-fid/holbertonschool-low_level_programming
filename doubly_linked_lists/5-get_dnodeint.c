#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - check the code
 *@head: head
 *@index: index
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
/*ptr current init parcourir liste*/
	dlistint_t *current = head;/*parcour liste start 1er nœud*/
	unsigned int i = 0;/*init 0 suivre idx parcours liste.*/

	while (current != NULL)/*pointeur current n'est pas NULL*/
	{
		if (i == index)
		{
			return (current);
		}
/*return ptr current pointe vers nœud à l'index spécifié.*/
		current = current->next;/*pas = pointe suivant*/
		i++;/*incrémente*/
	}
	return (NULL);/*si noeud existe pas*/
}
