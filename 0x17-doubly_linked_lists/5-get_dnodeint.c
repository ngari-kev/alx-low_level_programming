#include "lists.h"
/**
*get_dnodeint_at_index - get a node at specific index
*@head: pointer to head
*@index: index of a node
*Return: return pointer to node at index specified or NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count;
	dlistint_t *temp;

	count = 0;
	temp = head;
	while (temp != NULL)
	{
		if (count == index)
		{
			return (temp);
		}
		count++;
		temp = temp->next;
	}
	return (NULL);
}
