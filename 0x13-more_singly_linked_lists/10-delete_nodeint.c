#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at specific index
 * @head: pointer to the pointer of the head of the list
 * @index: index
 * Return: 1 success and -1 failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t count = 0;
	listint_t *h = *head, *prev;

	if (*head == NULL)
	{
		/* checking if the list exists */
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(h);
		return (1);
	}

	/* Iterate through the list to find where our index lies */
	while (h != NULL && count < index - 1)
	{
		prev = h;
		h = h->next;
		count++;
	}
	/* If idx is not within the list limit */
	if (h == NULL)
	{
		return (-1);
	}
	prev->next = h->next;
	free(h);
	return (1);
}
