#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - add node at the end of the list
 * @head: the head of the list
 * @n: the number to be added
 *
 * Return: returns nothing
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp;

	if (new_node == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
		new_node->n = n;
		new_node->next = NULL;
	}
	return (new_node);
}
