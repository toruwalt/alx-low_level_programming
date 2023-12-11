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
	dlistint_t **temp = malloc(sizeof(dlistint_t));
	if ((head = NULL))
	{
		return (0);
	}
	temp->next = head;
	temp->n = n;
	temp->prev = NULL;
	head->prev = temp;
	head = temp;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}

	return (*head);
}
