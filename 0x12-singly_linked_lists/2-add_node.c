#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - add node the beginning of a list
 * @head: the initial beginning
 * @:str: the content of the new node
 *
 * Return: the address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
