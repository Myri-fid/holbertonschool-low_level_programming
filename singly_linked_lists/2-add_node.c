#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - check the code
 *@head: head
 *@str: string
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	new_node = malloc(sizeof(list_t));
	new_node->next = *head;
	new_node->str = strdup(str);
	if (new_node == NULL) 
	{
	       	return (NULL); 
	}
	 if (new_node->str == NULL)
	 {
		free(new_node);
		 return (NULL);
	 }
	new_node->len = strlen(str);
	*head = new_node;
	return (new_node);
}
