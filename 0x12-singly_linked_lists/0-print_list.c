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
	int strln;

	i = 0;
	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
			temp = temp->next;
			i++;
		}
		strln = _strlen(temp->str);
		printf("[%d] %s\n", strln, temp->str);
		temp = temp->next;
		i++;
	}
	return (i);
}
/**
 * _strlen - counts the length of a string
 * @s: the string to be counted
 *
 * Return: nothing
 */

int _strlen(char *s)
{
	char *i;
	int count;

	count = 0;
	for (i = s; *i != '\0'; i++)
		count++;

	return (count);

}
