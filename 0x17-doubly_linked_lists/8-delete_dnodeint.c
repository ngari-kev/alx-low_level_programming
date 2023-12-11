#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: pointer to the head of the list
 * @index: integer value representing the index
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev;
	unsigned int count;

	count = 0;
	temp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (temp != NULL)
	{
		if (count == index)
		{
			prev->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = prev;
			free(temp);
			return (1);
		}
		prev = temp;
		temp = temp->next;
		count++;
	}
	return (-1);
}

