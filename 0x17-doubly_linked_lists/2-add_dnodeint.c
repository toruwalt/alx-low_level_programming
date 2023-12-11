#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint - Adds new item to the doubly linked list
 * @head: Head of the list
 * @n: The data to be added.
 * Return: The number of nodes in list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new;

	h = *head;
	new = malloc(sizeof(dlistint_t));
	if (head == NULL)
	{
		return (0);
	}
	new->next = *head;
	new->n = n;
	(*head)->prev = new;
	*head = new;

	while (new != NULL)
	{
		printf("%d\n", new->n);
		new = new->next;
	}

	free(new);

	return (*head);
}
