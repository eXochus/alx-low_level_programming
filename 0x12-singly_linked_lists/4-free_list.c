#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - free list
 * @head: begining of the list
 *
 * Return: returns nothing
 */
void free_list(list_t *head)
{
	list_t *next_node;
	list_t *current;

	if (head == NULL)
	{
		;
	}
	current = head;
	while (current != NULL)
	{
		next_node = current->next;
		free(current->str);
		free(current);
		current = next_node;
	}
}
