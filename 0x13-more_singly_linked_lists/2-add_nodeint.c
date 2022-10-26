#include "lists.h"

/**
 * *add_nodeint - Adds a new node to the linked list
 * @head: A pointer to the address of the linked list
 * @n: The integer for the new node to contain
 * Return: The address of the new element on sucess
 * or NULL otherwise
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
