#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - check the code
 *@head: head
 * Return: Always 0.
 */
void free_list(list_t *head)
{
	list_t *current = head;
        list_t *next_node;

        while (current != NULL)
        {
                next_node = current->next;
                free(current);
                current = next_node;
        }
}
