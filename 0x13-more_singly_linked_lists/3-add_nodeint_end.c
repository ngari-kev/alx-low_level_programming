#include "lists.h"
/**
  *add_nodeint_end - appends a node to a list
  *@head: pointer to head
  *@n: value to be added to new node
  *Return: pointer to new node
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *h;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->next = NULL;
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		h = *head;
		while (h->next != NULL)
		{
			h = h->next;
		}
		h->next = new_node;
	}
	return (new_node);
}
