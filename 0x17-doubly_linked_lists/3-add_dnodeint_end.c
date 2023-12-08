#include "lists.h"
/**
*add_dnodeint_end - add node at the end of a linked list
*@head: Pointer to the first node of a linked list
*@n: data value to store in the new node
*Return: pointer to end node or NULL
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (head == NULL)
	{
		*head = &new;
		return (new);
	}
	if ((*head)->next != NULL)
	{
		*head = (*head)->next;
	}
	(*head)->next = &new;
	new->prev = *head
	return (new);
}
