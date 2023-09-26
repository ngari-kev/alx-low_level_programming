#include "lists.h"
/**
  *get_nodeint_at_index - gets the data at the nth position
  *@head: pointer to head
  *@index: nth term
  *Return: pointer to the nth index
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *h;
	size_t count = 0;

	h = head;
	while (h != NULL && count < index)
	{
		h = h->next;
		count++;
	}
	return (h);
}
