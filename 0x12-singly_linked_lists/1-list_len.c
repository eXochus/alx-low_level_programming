#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - print list length
 * @h: the head of the list
 *
 * Return: returns the number of element in the list
 */
size_t list_len(const list_t *h)
{
	size_t i;
	const list_t *temp = h;

	i = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
