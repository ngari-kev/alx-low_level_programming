#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at index idx
 * @head: pointer to the pointer of the head of the list
 * @idx: index
 * @n: data of type int
 * Return: pointer at success or NULL on failure.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t count = 0;
	listint_t *h = *head, *new_node;

	if (head == NULL)
	{
		/* checking if the list exists */
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* Iterate through the list to find where our index lies */
	while (h != NULL && count < idx - 1)
	{
		h = h->next;
		count++;
	}
	/* If idx is not within the list limit */
	if (h == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = h->next;
	h->next = new_node;
	return (new_node);
}
