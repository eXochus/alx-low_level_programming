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
size_t print_list(const list_t *h)
{
	size_t i;
	const list_t *temp = h;

	i = 0;
	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
			temp = temp->next;
			i++;
		}
		printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		i++;
	}
	return (i);
}
