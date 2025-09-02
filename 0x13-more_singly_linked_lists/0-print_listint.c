#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print linked lists
 * @h: the head of the list
 *
 * Return: returns nothing
 */
size_t print_listint(const listint_t *h)
{
	size_t i;
	const listint_t *temp = h;

	i = 0;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
