#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - print linked lists
 * @h: the head of the list
 *
 * Return: returns nothing
 */
size_t listint_len(const listint_t *h)
{
	size_t i;
	const listint_t *temp = h;

	i = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
