#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print elements of linkedlist
 * @h: Linked list
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nbr_nodes = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		nbr_nodes++;
	}
	return (nbr_nodes);
}
