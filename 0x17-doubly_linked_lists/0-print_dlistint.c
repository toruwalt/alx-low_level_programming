#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_dlistint - Prints all items in doubly linked list
 * @h: Head of the list
 * Return: The number of nodes in list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;
	const dlistint_t *temp;

	count = 0;
	temp = h;
	if (h ==  NULL)
	{
		return (EXIT_FAILURE);
	}
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count += 1;
	}

	return (count);
}
