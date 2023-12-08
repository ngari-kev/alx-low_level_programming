#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of a list
 * @head: pointer to the start of the list
 * @n: data to store in the node
 * Return: pointer to the new node or NULL if malloc fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;


	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
