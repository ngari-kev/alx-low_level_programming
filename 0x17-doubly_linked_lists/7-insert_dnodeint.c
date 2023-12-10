#include "lists.h"
/**
*insert_dnodeint_at_index - inserts a new node at a given position
*@h: pointer to head
*@idx: index of a node
*@n: integer value to store in the new node
*Return: return pointer to new node or NULL if failure encountered
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t count;
	dlistint_t *temp, *new_node;

	count = 0;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*h == NULL)
	{
		*h = new_node;
		return (new_node);
	}
	while (*h != NULL)
	{
		if (count == idx - 1)
		{
			new_node->next = (*h)->next;
			(*h)->next = new_node;
		}
		if (new_node->next != NULL)
		{
			temp = new_node->next;
			new_node->prev = temp->prev;
			return (new_node);
		}
		count++;
		*h = (*h)->next;

	}
	free(new_node);
	return (NULL);
}
