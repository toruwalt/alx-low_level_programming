#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * dlistint_len - Prints all items in doubly linked list
 * @h: Head of the list
 * Return: The number of nodes in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;
	const dlistint_t *temp;

	count = 0;
	temp = h;
	if (h ==  NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		temp = temp->next;
		count += 1;
	}

	return (count);
}
